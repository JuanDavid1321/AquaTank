
// Credenciales Proyecto Firebase
#define FIREBASE_HOST "https://pruebaelectrovalvula-c427e-default-rtdb.firebaseio.com/"
#define FIREBASE_AUTH "tbtIaV7wn1ZJ9eX3ukpiRDnDeyB0GcVGtQFnAkyl"

// Firebase Data object
FirebaseData firebaseData;

// Si deseamos una ruta especifica
String nodo = "/Buttons";
String prueba;

void configuracionFirebase()
{
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.reconnectWiFi(true);
}
