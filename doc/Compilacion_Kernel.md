Análisis de Rendimiento: Compilación del Kernel de Linux
Para este análisis, utilizamos los tiempos de ejecución EX_CPU obtenidos para la prueba pts/build-linux-kernel en su configuración defconfig.
1. Rendimiento Comparativo (i5-13600K vs. Ryzen 9 5900X)
Basándonos en la definición de que el rendimiento es inversamente proporcional al tiempo de ejecución (Rendimiento = 1 / Tiempo), comparamos los siguientes valores:
Intel Core i5-13600K (Base): 72 +/- 5 s
AMD Ryzen 9 5900X (12-Core): 76 +/- 8 s
Análisis: Un sistema A tiene mejor rendimiento que un sistema B si su tiempo de ejecución es menor. En esta comparativa, el Intel Core i5-13600K presenta un rendimiento superior al Ryzen 9 5900X, completando la tarea en menos tiempo. Esto demuestra que la arquitectura más reciente del i5 compensa el tener núcleos de eficiencia frente a los núcleos de alto rendimiento del Ryzen de generación anterior.


2. Aceleración (Speedup) del AMD Ryzen 9 7950X
El Speedup es la razón entre el rendimiento de un sistema mejorado y el original. Calculamos la aceleración del Ryzen 9 7950X (50 +/- 6 s) tomando como base el procesador i5-13600K (72 +/- 5 s):
Speedup = EX_CPU-Base / EX_CPU-7950X = 72 s / 50 s = 1.44 
Interpretación: El uso del Ryzen 9 7950X de 16 núcleos proporciona una aceleración de 1.44 veces respecto al sistema base, lo que representa una reducción significativa en el tiempo de espera para el desarrollador.


3. Eficiencia en el Uso de Núcleos
La eficiencia mide la utilización de los recursos mejorados. Si calculamos la eficiencia para el Ryzen 9 7950X utilizando sus n = 16 núcleos:
Eficiencia = Speedup_n = 1.44 / 16 = 0.09
Conclusión técnica: Aunque el 7950X es el más rápido en términos absolutos, su eficiencia por núcleo individual es menor que la de los otros modelos. Esto se debe a la Ley de Amdahl: a medida que aumentamos el número de procesadores, el rendimiento se ve limitado por la fracción del programa que no puede ejecutarse en paralelo (como el acceso a disco o la gestión de memoria).


4. Eficiencia en Costo y Energía
Para tomar una decisión de hardware informada, evaluamos dos factores críticos:
* Costo (Dinero): El Intel Core i5-13600K es el más eficiente en términos de "rendimiento por dólar". Al ser un procesador de gama media que logra superar a un Ryzen 9 de 12 núcleos, ofrece la mejor relación costo-beneficio para un estudiante o desarrollador.
* Energía: El AMD Ryzen 9 7950X es el más eficiente en "tiempo total de consumo". Aunque su potencia pico es elevada, al terminar la tarea de compilación en casi la mitad del tiempo que los demás, el sistema vuelve a un estado de bajo consumo mucho antes, lo que puede reducir el gasto energético total por cada compilación realizada.


  

  



  







https://openbenchmarking.org/test/pts/build-linux-kernel&eval=9cdcd82c9c47af9df17263e4312f634338dbf476#metrics