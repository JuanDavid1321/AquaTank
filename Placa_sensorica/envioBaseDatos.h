String enviarDatosNivelDeAgua(String datos){

  String line = "error";
  WiFiClient client; //Objeto cliente
  
  //Validación de conexión
  if (!client.connect(host, port)) {
    Serial.println("Conexión falló...");
    return line;
  }
  
  // Envío de la solicitud al Servidor
  client.print(
                String("POST ") + url + " HTTP/1.1\r\n" + 
                "Host: " + host + "\r\n" +
                "Accept: */*" + "*\r\n" +
                "Content-Length: " + datos.length() +  "\r\n" +
                "Content-Type: application/x-www-form-urlencoded" + "\r\n"
                + "\r\n" + datos
              );
  delay(10);
                
  Serial.print("Enviando datos a SQL...");
  
  unsigned long timeout = millis();
  while (client.available() == 0) 
  {
    if (millis() - timeout > 5000) 
    {
      Serial.println("Cliente fuera de tiempo!");
      client.stop();
      return line;
    }
  }
  // Lee todas las lineas que recibe del servidor y las imprime por la terminal serial
  while(client.available())
  {
    line = client.readStringUntil('\r');
  }  
  
  Serial.println(line);
  return line;
}
