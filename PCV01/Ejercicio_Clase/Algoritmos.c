#include <stdio.h>

// "'El desafío de los 5 cofres misteriosos"
// Un grupo de aventureros ha llegado a una sala con 5 cofres misteriosos. Cada cofre puede contener
// una recompensa valiosa o una trampa peligrosa. Tu misión es desarrollar un programa en C que
// simule la selección de un cofre por parte del jugador y, usando estructuras de selección y aleatoriedad,
// determine el contenido del cofre seleccionado.
// Instrucciones:
// -
// El programa debe generar aleatoriamente el contenido de los 5 cofres antes de que el
// jugador seleccione uno. Las posibles opciones para cada cofre son:
// O
// 1: "Has encontrado 100 monedas de oro."
// 2: "Un monstruo aparece y te quita 50 puntos de vida."
// •
// 3: "Un artefacto, mágico te otorga una habilidad especial.".
// 4: "Has caído en una trampa, pierdes 30 puntos de vida."
// 5: "El cofre está vacío.'

int main()
{

   int cofre;
   printf("DESAFIO DE LOS 5 COFRES\n");

   do
   {
      printf("Selecciona un numero del 1 al 5, el cual corresponde a un cofre misterioso:\n");
      scanf("%d", &cofre);

      if (cofre < 1 || cofre > 5)
      {
         printf("Error, numero ingresado incorrecto. Intenta de nuevo.\n");
      }

   } while (cofre < 1 || cofre > 5);

   switch (cofre)
   {
   case 1:
      printf("Has encontrado 100 moneda de Oro.\n");
      break;

   case 2:
      printf("Un monstruo aparece y te quita 50 puntos de vida.\n");
      break;

   case 3:
      printf("Un artefacto, mágico te otorga una habilidad especial.\n");
      break;

   case 4:
      printf("Has caído en una trampa, pierdes 30 puntos de vida.\n");
      break;

   case 5:
      printf("El cofre está vacío..\n");
      break;
   }

   return 0;
}
