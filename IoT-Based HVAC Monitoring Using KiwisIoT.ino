#include <ESP8266WiFi.h>
#include <KiwisIoT.h>
#include <DHT.h>

#define DHT_PIN D4
#define DHT_TYPE DHT11

const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

DHT dht(DHT_PIN, DHT_TYPE);

const float TEMP_LIMIT = 30.0;

void setup() {
  Serial.begin(115200);

  dht.begin();

  kiwisiot.begin();

  Serial.println("HVAC Monitoring System Started");
}

void loop() {
  kiwisiot.run();

  static unsigned long lastSend = 0;

  if (millis() - lastSend >= 2000) {
    lastSend = millis();

    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();

    if (isnan(temperature) || isnan(humidity)) {
      Serial.println("Sensor reading failed!");
      return;
    }

    String status;

    if (temperature >= TEMP_LIMIT) {
      status = "HIGH TEMPERATURE";
    } else {
      status = "TEMPERATURE NORMAL";
    }

    Serial.println("------------------------");

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" C");

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");

    Serial.print("HVAC Monitoring Status: ");
    Serial.println(status);

    // Send data to KiwisIoT
    kiwisiot.send("0", temperature);
    kiwisiot.send("1", humidity);
    kiwisiot.send("2", status);
  }
}