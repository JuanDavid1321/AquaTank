#include "esp32-hal-gpio.h"
void llenadoTanque(){

  //Garantizar mandar la alerta de Telegram solo una vez
  if(contador){
    bot.sendMessage(chat_id, "⚙ En estado de llenado del tanque ⚙", "");
  }

  //Consulta nivel del tanque
  Firebase.getFloat(firebaseData, "SensorTanque/nivel");

  consultaNivelParaLlenadoTanque = firebaseData.floatData();

  if(consultaNivelParaLlenadoTanque > 9.5){
    
    digitalWrite(pinControlTanqueRecoleccion, HIGH);

  }  
  else{

    digitalWrite(pinControlTanqueRecoleccion, LOW);

    bot.sendMessage(chat_id, "✅ Tanque listo ✅", "");

    estado = 3;
    contador2 = true;

  }

  contador = false;

}