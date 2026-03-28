void setup() {
  // Inicializamos la comunicación serie a 115200 baudios
  Serial.begin(115200);

}

void loop() {


  unsigned long inicio = millis(); // Capturamos el inicio
  unsigned long contador = 0;

  volatile double suma = 0.0;
  for (contador = 0; contador < 40000000; contador++) {
        suma += 1.0; // Realizamos la suma


  }
 
  
  unsigned long fin = millis(); // Capturamos el final
  unsigned long transcurrido = fin - inicio;

  Serial.print("El proceso tardó: ");
  Serial.print(transcurrido);  //Mostramos la diferencia via terminal
  Serial.println("milis");
  
}
