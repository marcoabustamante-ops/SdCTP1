#!/bin/bash
echo "Compilando codigo con la bandera -pg"

gcc -Wall -pg test_gprof.c test_gprof_new.c -o test_gprof

echo "Ejecutando programa"

./test_gprof 

echo "generando los reportes apartir de gmon.out"

gprof -p -b test_gprof gmon.out > analysis.txt

echo "Mostrando informe plano y sin detalles"

cat analysis.txt
