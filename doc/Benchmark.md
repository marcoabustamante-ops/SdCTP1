# Análisis de Rendimiento y Benchmarks

## Introducción

El rendimiento de un sistema se define como su capacidad para completar un trabajo en un tiempo determinado. El rendimiento al ser inversamente proporcional al tiempo, la medida más directa de desempeño es el tiempo de ejecución de los programas. Para analizar este comportamiento de forma relativa, utilizamos benchmarks, que son programas de prueba diseñados para evaluar el hardware bajo distintos tipos de carga.

A continuación, presentamos una lista de benchmarks.

* **Timed Linux Kernel Compilation:** Es un benchmark de **programa real** que mide el tiempo necesario para construir el kernel de Linux desde el código fuente. Evalúa la capacidad del procesador para manejar miles de archivos pequeños, la gestión de la memoria RAM y la eficiencia del compilador. Es una métrica fiel para un entorno de desarrollo.
* **Cinebench 2026:** Un benchmark **sintético de aplicación** que utiliza el motor de renderizado Redshift. Está diseñado para medir el **throughput** (capacidad de trabajo total) de la CPU y la GPU en tareas de renderizado 3D de alta carga. Es muy sensible a las mejoras en la arquitectura del hardware.
* **Pruebas de FLOPS (Floating Point Operations Per Second):** Son tests de **bajo nivel** que miden la cantidad de operaciones matemáticas de punto flotante que el hardware puede resolver por segundo. Representan la métrica de potencia bruta más pura para cálculos científicos y simulaciones.
* **FurMark:** Un benchmark **sintético de estrés** (stress test) que utiliza algoritmos de renderizado de pelaje para llevar la GPU a su límite térmico y de consumo eléctrico. A diferencia de un juego, mantiene una carga constante del 100% para evaluar la estabilidad del hardware y el sistema de refrigeración.
* **Speedometer / JetStream:** Benchmarks **de aplicación** basados en el navegador que miden la velocidad de ejecución de scripts web (JavaScript). Reflejan la fluidez y la **latencia** en tareas de navegación diaria y aplicaciones en la nube.

**Pablo Castilla (Programación y Gaming):** El Timed Linux Kernel Compilation es el más útil para medir el tiempo de ejecución en desarrollo , y FurMark  que mide mejor la estabilidad del hardware en juegos pesados.

### 3. Tabla de Tareas y Benchmarks (Resumen)

| Tareas que realizamos a diario | Benchmark que mejor la representa |
| :--- | :--- |
| **Compilación de software (Desarrollo)** | **Timed Linux Kernel Compilation** |
| **Gaming y Ocio** | **FurMark / In-Game Benchmark** |
| **Streaming Velocidad de Internet** | **Speedtest.net** |
| **Grabacion de video HD** | **FFMPEG** |
