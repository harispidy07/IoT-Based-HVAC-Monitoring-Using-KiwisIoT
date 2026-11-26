# IoT-Based HVAC Monitoring Using KiwisIoT

## Project Overview

This project demonstrates an IoT-based HVAC (Heating, Ventilation, and Air Conditioning) monitoring system using the NodeMCU ESP8266 and KiwisIoT platform. It enables remote monitoring of HVAC-related environmental parameters through a cloud-connected dashboard.

The ESP8266 collects sensor data, processes the readings, and sends the information to KiwisIoT through Wi-Fi, allowing users to monitor environmental conditions remotely.

## Hardware Components

- NodeMCU ESP8266
- Environmental sensor(s) used in the project
- Jumper wires
- USB cable

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- Required Sensor Libraries
- KiwisIoT Arduino Library
- KiwisIoT Dashboard

## Circuit Connections

Connect the environmental sensor(s) to the NodeMCU ESP8266 according to the hardware configuration used in the project.

## Working Principle

The sensor(s) collect HVAC-related environmental data and transmit the readings to the NodeMCU ESP8266. The controller processes the data and sends the information to the KiwisIoT platform using a Wi-Fi connection.

The KiwisIoT dashboard allows users to remotely monitor environmental parameters, helping observe indoor conditions and HVAC system performance.

## KiwisIoT Dashboard

- Monitor HVAC-related sensor readings remotely.
- Visualize environmental data in real time.
- Observe changing indoor environmental conditions.
- Access monitoring data through the cloud dashboard.

## Configuration

Update your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino program.

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

## Applications

- HVAC system monitoring
- Smart buildings
- Office environmental monitoring
- Indoor climate monitoring
- Commercial facilities
- HVAC maintenance monitoring

## Project Reference

**Hackster.io Project:**  
[IoT-Based HVAC Monitoring Using KiwisIoT](https://www.hackster.io/harispidy07/iot-based-hvac-monitoring-using-kiwisiot-25c6e4)

**KiwisIoT Platform:**  
https://kiwisiot.in/

**KiwisIoT GitHub Repository:**  
https://github.com/Kiwistron/KiwisIoT-Projects

## Author

**Hariprasath S**

GitHub: https://github.com/harispidy07

---

_Connecting HVAC monitoring with IoT technology._
