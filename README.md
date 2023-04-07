# Sistema de Gestión de Agua usando ESP32

Este repositorio contiene el código fuente para un sistema de gestión de agua basado en IoT que utiliza placas ESP32 para la adquisición de datos y el control de actuadores. El sistema incluye un sensor de distancia hc-sr04 para la medición del nivel de agua y almacenamiento de datos en tiempo real en Firebase. El código está escrito en C y C++ usando Arduino IDE, y MySQL se utiliza como DBMS. El sistema también cuenta con una API de bot de Telegram para ESP32 y una máquina de estados para el control de electroválvulas de activación de flujo de agua.

## Características
- Monitoreo en tiempo real del nivel y flujo de agua.
- Control inteligente del flujo de agua mediante el uso de máquinas de estados y electroválvulas.
- Almacenamiento de datos en tiempo real en Firebase.
- Control remoto del sistema mediante la API de bot de Telegram.

## Requerimientos de Hardware
- 2 x placas ESP32
- 2 x Sensor de distancia hc-sr04
- 2 x Electroválvulas
- Bomba de agua

## Requerimientos de Software
- Arduino IDE
- MySQL
- Firebase
- API de bot de Telegram

## Uso
1. Sube el código a tus placas ESP32 usando Arduino IDE.
2. Conecta el sensor de distancia hc-sr04 y las electroválvulas a las placas ESP32.
3. Configura los ajustes del sistema en el código.
4. Ejecuta el código y monitorea el sistema mediante la API de bot de Telegram o la consola de Firebase.+

## Esquemático conexiones

- Conexión Sensor HC-SR04

![SENSOR](/imagenes/sensor2.png)

- Conexión Electroválvula

![ELECTROVALVULA](/imagenes/electrovalvula.png)

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
