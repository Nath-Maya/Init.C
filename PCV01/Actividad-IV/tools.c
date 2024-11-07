#include <stdio.h>

int main()
{

   //** Definir la variable que contendra la funcion 
   int option;

   //**  Imprimo las opciones para que el usuario seleccione
   printf("TOOLS EN C \n\n");

   printf("1. Calcular el promedio de un arreglo de enteros\n");
   printf("2. Invertir una cadena de caracteres\n");
   printf("3. Verificar si un número es primo\n");
   printf("4. Contar vocales y consonantes en una cadena\n");
   printf("5. Calcular el factorial de un número\n");
   printf("6. Intercambiar los valores de dos enteros\n\n");
   printf("Seleccione la utilidad o herramienta que necesita usar: \n\n");
   scanf("%d", &option);
   
   //* Estructura de Control de la opcion seleccionada
   switch (option)
   {
   case 1:
      printf("Opcion seleccionada: Calcular el promedio de un arreglo de enteros\n");
      break;
   case 2:
      printf("Opcion seleccionada: Invertir una cadena de caracteres\n");
      break;
   case 3:
      printf("Opcion seleccionada: Verificar si un número es primo\n");
      break;
   case 4:
      printf("Opcion seleccionada: Contar vocales y consonantes en una cadena\n");
      break;
   case 5:
      printf("Opcion seleccionada: Calcular el factorial de un número\n");
      break;
   case 6:
      printf("Opcion seleccionada: Intercambiar los valores de dos enteros\n");
      break;
   default:
      printf("Opcion Incorrecta\n");
   }

   



   return 0;
}