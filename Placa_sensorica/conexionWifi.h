// Para implementar en el método SetUp del código fuente, la configuración necesaria de la red WiFi

// Estoy probando los commit

void configuracionWifi(){
  
  Serial.begin(115200);  //Inicializar monitor serie a x velocidad en baudios

  // Imprimir la red a la que se está conectando
  Serial.print("Conectando a...");  
  Serial.println(ssid);
  
  // Inicializar la conexión con la red
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi conectado");  
  Serial.println("Dirección IP: ");
  Serial.println(WiFi.localIP());
}