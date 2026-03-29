

# Probar como varia el rendimineto al variar la velocidad del procesador

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
