const char* ssid     = "xxx";      // SSID
const char* password = "xxx";      // Password


// const char* host = "192.168.0.12";  // Dirección IP local o remota, del Servidor Web .000webhostapp.com
const char* host = "tanquesinteligentes.000webhostapp.com";  // Dirección IP local o remota, del Servidor Web .000webhostapp.com

const int   port = 80;            // Puerto, HTTP es 80 por defecto, cambiar si es necesario.
// String irl = "/pruebaTanquesInteligentes/envioBD.php"
String url = "/modelo/envioBD.php";

// Prueba de valores nivel agua manualmente
float n = 15.0;

unsigned long previousMillis = 0;

int gpio21_pin = 5; // El GPIO5 de la tarjeta ESP32, corresponde al pin D5 identificado físicamente en la tarjeta.
int ID_TARJ=1; // Este dato identificará cual es la tarjeta que envía los datos

