// Hacer un algoritmo que calcule e imprima el costo de un terreno rectangular, teniendo como datos la anchura y la longitud en metros, y el costo del metro cuadrado

#include <stdio.h>

float calculateCostoTerreno(float anchoTerreno, float largoTerreno, float costoMt2)
{
   return (anchoTerreno * largoTerreno) * costoMt2;
}

int main()
{
   // Definir variables
   float anchoTerreno, largoTerreno, costoMt2, costoTerreno;

   // Entradas
   printf("Ingrese ancho del terreno: \n");
   scanf("%f", &anchoTerreno);

   printf("Ingrese largo del terreno: \n");
   scanf("%f", &largoTerreno);

   printf("Ingrese costo por mt2 del  terreno: \n");
   scanf("%f", &costoMt2);

   // Calcular costo de Terreno

   costoTerreno = calculateCostoTerreno(largoTerreno, anchoTerreno, costoMt2);

       // Imprimir resultado
       printf("El costo del terreno es de: %.2f\n", costoTerreno);

   return 0;
}
