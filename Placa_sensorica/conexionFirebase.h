
// Credenciales Proyecto Firebase
#define FIREBASE_HOST "https://.firebaseio.com/"
#define FIREBASE_AUTH "xx"

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
