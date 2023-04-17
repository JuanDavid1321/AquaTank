[README in English](README.md)

#

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
