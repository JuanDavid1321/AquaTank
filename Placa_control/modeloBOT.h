#include "esp32-hal-gpio.h"
void handleNewMessages(int numNewMessages)
{
  Serial.print("handleNewMessages ");
  Serial.println(numNewMessages);
  for (int i = 0; i < numNewMessages; i++)
  {
    String chat_id = bot.messages[i].chat_id;
    String text = bot.messages[i].text;

    String from_name = bot.messages[i].from_name;
    if (from_name == "")
      from_name = "Guest"; 
      
    if (text == "/encender") {
      digitalWrite(pinControlTanqueTratamiento, HIGH);
      bot.sendMessage(chat_id, "✅ Electrovalvula activada ✅", "");
    } 
    
    if (text == "/apagar") { 
      digitalWrite(pinControlTanqueTratamiento, LOW);
      bot.sendMessage(chat_id, "🚫 Electrovalvula desactivada 🚫", "");
    }  
    if (text == "/menu") { 
      String welcome = "Menú para usuario " + from_name + ".\n";
      welcome += "\n";
      welcome += "\n";
      welcome += "/encender : Permitir el flujo de agua\n";
      welcome += "\n";
      welcome += "\n";
      welcome += "/apagar : No permitir el flujo de agua\n";
      welcome += "\n";
      bot.sendMessage(chat_id, welcome, "Markdown");
    } 
  } 
}
