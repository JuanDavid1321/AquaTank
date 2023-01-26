#include "esp32-hal-gpio.h"
#include "modeloBOT.h"

void controlDelUsuario(){

  //Garantizar mandar la alerta de Telegram solo una vez
  if(contador2){
    bot.sendMessage(chat_id, "utilice el comando /menu para ver las opciones que tiene", "");
  }
  
  //Consulta nivel del tanque
  Firebase.getFloat(firebaseData, "SensorTanque/nivel");

  consultaNivelParaTratamiento = firebaseData.floatData();

  if(consultaNivelParaTratamiento <= 11.0){

    if (millis() - bot_lasttime > BOT_MTBS)
    { 
      int numNewMessages = bot.getUpdates(bot.last_message_received + 1); 
      
      while (numNewMessages) { 
        Serial.println("got response");
        handleNewMessages(numNewMessages); 
        numNewMessages = bot.getUpdates(bot.last_message_received + 1);
      } 
      
      bot_lasttime = millis(); 
    } 
  }

  else{

    bot.sendMessage(chat_id, "🚫 Nivel de tanque insuficiente 🚫", "");

    digitalWrite(pinControlTanqueTratamiento, LOW);

    estado = 1;
  }

  contador2 = false;

}