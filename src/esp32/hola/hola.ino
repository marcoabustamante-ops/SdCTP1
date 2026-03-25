void setup() {
  // Inicializamos la comunicación serie a 115200 baudios
  Serial.begin(115200);
  
  Serial.println("¡Configuración lista!");
}

void loop() {
  // Imprimir mensaje en el monitor serie
  Serial.println("Hola Mundo desde ESP32");
  delay(1000); // Esperar 1 segundo
  
}
