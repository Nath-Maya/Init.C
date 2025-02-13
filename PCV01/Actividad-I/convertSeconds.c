// Hacer un algoritmo que convierta un número dado de segundos en minutos, y que imprima el
// resultado.

#include <stdio.h>

int main()
{
   // Definir variables
   int segundos;
   float totalMinutos = 0;

   printf("CONVERTIDOR DE SEGUNDOS A MINUTOS \n");

   // Entradas
   printf("Ingresar cantidad de segundos: \n");
   scanf("%d", &segundos);

   // Proceso
   totalMinutos = segundos/60.0;

   printf("En %d hay %.2f: \n minutos", segundos, totalMinutos);

   return 0;
}
