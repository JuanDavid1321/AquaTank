#include "esp32-hal-gpio.h"
#include "esp32-hal.h"

void dosificacion(){

  int tiempoDosificacion = 2000; //1000 equivale en un segundo

  //Alerta programada de bot
  bot.sendMessage(chat_id, "⚙ En estado de dosificación ⚙", "");
  

  //Consulta nivel del tanque
  Firebase.getFloat(firebaseData, "SensorTanque/nivel");

  consultaNivelParaDosificador = firebaseData.floatData();

  if(consultaNivelParaDosificador >= 11.0){
  
    digitalWrite(pinControlDosificador, HIGH);
    delay(tiempoDosificacion);
    digitalWrite(pinControlDosificador, LOW);

    bot.sendMessage(chat_id, "✅ Dosificación completa ✅", "");
    
    estado = 2;
    contador = true;

  }

  else{

    bot.sendMessage(chat_id, "🚫 Nivel de tanque incorrecto, no se dosificó cloro 🚫", "");

  }
}