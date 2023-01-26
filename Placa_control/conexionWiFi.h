

// const char* ssid     = "xxxx";      // SSID
// const char* password = "xxxx";      // Password

const unsigned long BOT_MTBS = 1000; // mean time between scan messages

// Telegram BOT Token (Obtenido del Botfather)
#define BOT_TOKEN "5379376541:-sKFp2Fk"

// ID del celular
String chat_id = "xxxx";

WiFiClientSecure secured_client;

UniversalTelegramBot bot(BOT_TOKEN, secured_client);

unsigned long bot_lasttime; // last time messages' scan has been done

// Para implementar en el método SetUp del código fuente, la configuración necesaria de la red WiFi

void configuracionWifi(){
  
  Serial.begin(115200);  //Inicializar monitor serie a x velocidad en baudios

  // Imprimir la red a la que se está conectando
  Serial.print("Conectando a...");  
  Serial.println(ssid);
  
  // Inicializar la conexión con la red
  WiFi.begin(ssid, password);

  secured_client.setCACert(TELEGRAM_CERTIFICATE_ROOT); // Agregar certificación de api.telegram.org
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi conectado");  
  Serial.println("Dirección IP: ");
  Serial.println(WiFi.localIP());
}
