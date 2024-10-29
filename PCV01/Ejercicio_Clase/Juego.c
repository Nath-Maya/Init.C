// Escribe un programa en C que simule el clásico juego de "Piedra, Papel o Tijera" entre un player y la
// pc. Las reglas del juego son las siguientes:
// -
// La pc debe generar aleatoriamente una de las tres optiones: Piedra, Papel o
// Tijera.
// 2
// El player deberá ingresar su elección (Piedra, Papel o Tijera). Si el player ingresa una
// opción no válida, el programa debe solicitarle que ingrese una opción correcta. 3
// y determinará al ganador de acuerdo con las reglas: El programa comparará las elecciones •
// Piedra vence a Tijera.
// Tijera vence a Papel.
// O
// Papel vence a Piedra.
// 4
// El juego debe repetirse hasta que el player decida salir, ingresando una opción especial
// para finalizar el programa.
// 5 Al final de cada ronda, se debe mostrar el resultado (victoria, derrota o empate) y se le
// debe preguntar al player si desea jugar de nuevo.
// Requisitos:
// Utiliza ciclos para gestionar las rondas del juego y la repetición.
// No se permite el uso de funciones, procedimientos o recursividad.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int player, pc;
   char option = 's';

   srand(time(0));

   while (option == 's' || option == 'S')
   {
      // OPCION RANDOM DEL PC
      pc = rand() % 3 + 1;

      // OPCIONES PARA EL PLAYER
      printf("Por favor elige una opcion:\n");
      printf("1 Piedra\n");
      printf("2 Papel\n");
      printf("3 Tijera\n");
      printf("Escribe el numero correspondiente: ");
      scanf("%d", &player);

      while (player < 1 || player > 3)
      {
         printf("Opción no válida. Elige nuevamente:\n");
         printf("1. Piedra\n");
         printf("2. Papel\n");
         printf("3. Tijera\n");
         printf("Tu elección: ");
         scanf("%d", &player);
      }


      if (pc == 1)
      {
         printf("La pc eligió: Piedra\n");
      }
      else if (pc == 2)
      {
         printf("La pc eligió: Papel\n");
      }
      else
      {
         printf("La pc eligió: Tijera\n");
      }

  
      if (player == pc)
      {
         printf("EMPATE!\n");
      }
      else if ((player == 1 && pc == 3) ||
               (player == 2 && pc == 1) ||
               (player == 3 && pc == 2))
      {
         printf("FELICITACIONES, HAS GANADO!\n");
      }
      else
      {
         printf("LO LAMENTO PERO PERDISTE!\n");
      }


      printf("Volvermos a jugar? (s para SI, n para NO): ");
      scanf(" %c", &option);
   }

   printf("Gracias por jugar!\n");

   return 0;
}
