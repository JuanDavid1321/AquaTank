
// Credenciales wifi
const char* ssid     = "Juan David Carvajal";      // SSID
const char* password = "Juancho1321";      // Password

// const char* ssid     = "TP-LINK_DE16";      // SSID
// const char* password = "67743667";      // Password

const unsigned long BOT_MTBS = 1000; // mean time between scan messages

// Telegram BOT Token (Obtenido del Botfather)
#define BOT_TOKEN "5379376541:AAGEwH1pLdq_7q5TOF3SltjNzBi-sKFp2Fk"

// ID del celular
String chat_id = "1135952709";

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
