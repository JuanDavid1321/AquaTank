[Readme en español](README(es).md)

#

# Water Management System using ESP32
This repository contains the code for an IoT-based water management system that uses ESP32 boards for data acquisition and actuator control. The system includes a hc-sr04 distance sensor for water level measurement and real-time data storage in Firebase. The code is written in C and C++ using the Arduino IDE, and MySQL is used as the DBMS. The system also features a Telegram bot API for ESP32 and a state machine for controlling the water flow activation electrovalves.

## Features
- Real-time monitoring of water levels and flow.
- Intelligent control of water flow using state machines and electrovalves.
- Real-time data storage in Firebase.
- Remote control of the system using the Telegram bot API.

## Hardware Requirements
- 2 x ESP32 boards
- 2 x hc-sr04 distance sensor
- 2 x Electrovalves
- Water pump

## Software Requirements
- Arduino IDE
- MySQL
- Firebase
- Telegram bot API

## Usage
1. Upload the code to your ESP32 boards using the Arduino IDE.
2. Connect the hc-sr04 distance sensor and electrovalves to the ESP32 boards.
3. Configure the system settings in the code.
4. Run the code and monitor the system using the Telegram bot API or the Firebase console.

## Connection schematic

- HC-SR04 sensor connection

![SENSOR](/imagenes/sensor2.png)

- Solenoid valve connection

![ELECTROVALVULA](/imagenes/electrovalvula.png)
