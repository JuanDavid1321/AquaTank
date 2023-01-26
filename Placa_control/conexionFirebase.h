
// Credenciales Proyecto Firebase
#define FIREBASE_HOST "https://pruebaelectrovalvula-c427e-default-rtdb.firebaseio.com/"
#define FIREBASE_AUTH "tbtIaV7wn1ZJ9eX3ukpiRDnDeyB0GcVGtQFnAkyl"

// Firebase Data object
FirebaseData firebaseData;

void configuracionFirebase()
{
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.reconnectWiFi(true);
}


// Variables globales
int estado = 0;
float consultaNivelParaDosificador = 0.0, consultaNivelParaLlenadoTanque = 0.0, consultaNivelParaTratamiento = 0.0;
bool contador, contador2;

int pinControlTanqueTratamiento = 12;
int pinControlTanqueRecoleccion = 13;
int pinControlDosificador = 14;
