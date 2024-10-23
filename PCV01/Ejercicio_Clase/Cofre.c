#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cofre, contenido;


    srand(time(NULL));

    printf("DESAFIO DE LOS 5 COFRES\n");

    do {
        printf("Selecciona un numero del 1 al 5, el cual corresponde a un cofre misterioso:\n");
        scanf("%d", &cofre);

        if (cofre < 1 || cofre > 5) {
            printf("Error, numero ingresado incorrecto. Intenta de nuevo.\n");
        }

    } while (cofre < 1 || cofre > 5);


    contenido = rand() % 5 + 1;

    switch (contenido) {
        case 1: printf("Has encontrado 100 monedas de Oro.\n"); break;
        case 2: printf("Un monstruo aparece y te quita 50 puntos de vida.\n"); break;
        case 3: printf("Un artefacto mágico te otorga una habilidad especial.\n"); break;
        case 4: printf("Has caído en una trampa, pierdes 30 puntos de vida.\n"); break;
        case 5: printf("El cofre está vacío.\n"); break;
    }

    return 0;
}
