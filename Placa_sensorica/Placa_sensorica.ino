#include <FirebaseESP32.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include "credencialesWifi.h"
#include "envioBaseDatos.h"
#include "conexionWifi.h"
#include "conexionFirebase.h"

long tiempo;
float distancia;

long tiempo2;
float distancia2;

// Para el dosificador
int trigger  = 13;
int echo = 12;

// Para el tanque
int trigger2 = 14;
int echo2 = 27;

void setup() 
{
  //Llamado al método propio de la librería "conexionWiFi.h"
  configuracionWifi();
  
  //Llamado al método propio de la librería "conexionFirebase.h"
  configuracionFirebase();

  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trigger2, OUTPUT);
  pinMode(echo2, INPUT);
}

void loop() 
{
  medir();

  medir2();
  
  Firebase.setFloat(firebaseData, "/SensorTanque/nivel", distancia2);

  Firebase.setFloat(firebaseData, "/SensorDosificador/nivel", distancia);

  unsigned long currentMillis = millis();


  if (currentMillis - previousMillis >= 20000) { //envia el nivel de agua cada 60 segundos
    previousMillis = currentMillis;
    Serial.println(n);
    String urlDatos = "ID_TARJ=" + String(ID_TARJ) + "&nivel=" + String(distancia2);

    // Llamado al método para insertar datos
    enviarDatosNivelDeAgua(urlDatos);
  }

}

void medir()
{
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  
  tiempo=pulseIn(echo,HIGH);//us=microsegundos
  distancia = float(tiempo*0.0343)/2;
  delay(3000);
}

void medir2()
{
  digitalWrite(trigger2,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger2,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger2,LOW);
  
  tiempo2=pulseIn(echo2,HIGH);//us=microsegundos
  distancia2 = float(tiempo2*0.0343)/2;
  delay(3000);
}
