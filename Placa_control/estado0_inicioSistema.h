void inicioSistema(){

  bot.sendMessage(chat_id, "⚙ Configurando sistema, espere por favor ⚙", "");

  delay(5000);

  String mensajeInicio = "🛠 Bienvenido 🛠 \n";
    mensajeInicio += "\n";
    mensajeInicio += "Sistema conectado a la red: \n";
    mensajeInicio += "\n";
    mensajeInicio += ssid;
    mensajeInicio += "\n";

  bot.sendMessage(chat_id, mensajeInicio, "Markdown");

  delay(5000);
  
  estado = 1;

}