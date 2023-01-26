#include <FirebaseESP32.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>
#include <WiFi.h>
#include "conexionWiFi.h"
#include "conexionFirebase.h"
#include "estado0_inicioSistema.h"
#include "estado1_dosificacion.h"
#include "estado2_llenarTanque.h"
#include "estado3_usuario.h"


void setup() 
{
  estado = 0;
  contador = true;
  contador2 = true;

  //Configuración pines de control actuadores, a través de módulos relay
  pinMode(pinControlTanqueRecoleccion, OUTPUT);
  pinMode(pinControlTanqueTratamiento, OUTPUT);
  pinMode(pinControlDosificador, OUTPUT);
  
  //Llamado al método propio de la librería "conexionWiFi.h"
  configuracionWifi();
  
  //Llamado al método propio de la librería "conexionFirebase.h"
  configuracionFirebase();
  
}


void loop() 
{
  switch (estado) {
    case 0:
      inicioSistema();
      break;

    case 1:
      dosificacion();
      break;

    case 2:
      llenadoTanque();
      break;

    case 3:
      controlDelUsuario();
      break;
  }
} 


