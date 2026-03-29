# Pruebas de Ejecucion en ESP32

## Practico 
Conseguir un esp32 o cualquier procesador al que se le pueda cambiar la frecuencia.
Ejecutar un código que demore alrededor de 10 segundos. Puede ser un bucle for con sumas de enteros por un lado y otro con suma de floats por otro lado.
¿Qué sucede con el tiempo del programa al duplicar (variar) la frecuencia ? 

Al duplicar la frecuencia esperamos que se duplique la cantidad de instrucciones por segundo, pero es posible que no sea exactamante lineal

## Prerequisitos
* Computadora con sistema operativo basado en linux
* Placa de desarrollo ESP32
* Cable Usb

## Planificacion Incremental
El desarrrolo es simple, pero aun iremos construyendo el programa paso a paso
1. Hola Mundo
2. Crear un programa que demore al menos 10 segundos
3. Ejecutar el programa con diferentes velocidad de procesador


## Intalacion del entorno
* Podemos usar el IDE de Arduino para esta placa
```bash
sudo apt install arduino
```
* solo hay que configurarlo adecuadamente, en Additioanal Boards Manager URLs con la URL `https://dl.espressif.com/dl/package_esp32_index.json` 

File / Preference

<img width="843" height="226" alt="Additional_Boards" src="https://github.com/user-attachments/assets/f526d82b-b42a-4683-bd1c-6ffcf078b68a" />

* Buscamos los archivos necesarios para utilizar nuestra placa desde. Asegurarse de elegir la ESP32 de Expressif System 

Tools / Board / BoardsManager

<img width="622" height="354" alt="ManagerBoard" src="https://github.com/user-attachments/assets/6624afd0-3088-4f18-99db-3656e3eadfe7" />

<br>

## Primer programa
Aqui configuaramos la comunicacion y un programa de bienvenida
```arduino 
void setup() {
  // Inicializamos la comunicación serie a 115200 baudios
  Serial.begin(115200);
  
  Serial.println("¡Configuración lista!");
}
```
luego mostramos el clasico Hola y esperamos 1 ssegundo, sino los mensajes se empiezan a acumular
```arduino
void loop() {
  // Imprimir mensaje en el monitor serie
  Serial.println("Hola Mundo desde ESP32");
  delay(1000); // Esperar 1 segundo
  
}
```
## Medir el tiempo de ejecucion

El rendimiento es inversamente proporcional al tiempo que demora en ejecutar un programa
Contruimos una tarea repetitiva de almenos 10s. De esta manera la medicion del tiempo afecta poco el resultado. Para esto nos servimos de la funcion millis().

```arduino 
    unsigned long inicio = millis(); // Capturamos el inicio
    unsigned long fin = millis(); // Capturamos el final
    unsigned long transcurrido = fin - inicio;
    Serial.print(transcurrido);  //Mostramos la diferencia via terminal
```
## Dos tipos de instrucciones
Las pruebas se realizas con una suma. En el primer caso son de enteros y en el segundo caso de float. En general los enteros requieren solo un ciclo de instruccion para completarse y las operacione con float varias. Esto podria hacer variar los resultados

## Que se espera
Como el tiempo de ejecucion depende del la velociadad del procesador esperamos una disminucion del rendimiento al bajar la velocidad del procesador. Intuimos una proporcionalidad directa entre rendimineto y velocidad del procesador. 

## Como se ejecuta el cambio de velociad
Usamos el entorno de Arduino para programar el esp32. Configurar la velociad del procesador se hace desde los registo o desde alguna funcion. Aqui tenemos a la manos en el menu de la aplicacion la posibilidad de elegir esta velociada antes de procededer a cargar el proyecto en la placa. Cada vez que se modifica dicho parametro se debe volver a cargar
``` 
Tools -> CPU frequency
```
## Ejecutar programas variando la velocidad del procesador**
*Operando con enteros*
Numero de operaciones: 300M

| freq | tiempo |	
| :---: | :---: |
| 240MHz | 13802ms | 
| 120MHz | 20741ms |
| 60MHz | 41717ms |

*Operando con float*
Numero de operaciones: 40M

| freq | tiempo |	
| :---: | :---: |
|240MHz	|11340ms| 
|120MHz	|17043ms|
|60MHz	|34285ms|

Vemos la enome diferencia de tiempo de ejecucion entre operaciones con enteros y operaciones con decimales. La escalada de rendimiendo al aumentar la fecuencia no es lineal pero si sube mucho el consumo.
