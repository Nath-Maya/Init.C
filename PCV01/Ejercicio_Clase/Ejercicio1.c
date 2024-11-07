#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANO 10

int main() {
    int vector[TAMANO];
    int intento, exito = 1; // Variable para seguimiento de éxito en el juego
    srand(time(NULL));      // Inicializar semilla aleatoria

    // LLENAR VECTOR CON 0s Y 1s ALEATORIAMENTE
    for (int i = 0; i < TAMANO; i++) {
        vector[i] = rand() % 2; // Genera 0 o 1 aleatoriamente
    }

    printf("¡Bienvenido al juego de adivinanza!\n");

    // JUEGO: EL USUARIO INTENTA ADIVINAR CADA POSICIÓN
    for (int i = 0; i < TAMANO; i++) {
        printf("Adivina el valor en la posición %d (0 o 1): ", i + 1);
        scanf("%d", &intento);

        // VERIFICAR SI LA ADIVINANZA ES CORRECTA
        if (intento != vector[i]) {
            printf("Incorrecto. Llegaste hasta la posición %d.\n", i + 1);
            exito = 0;  // Cambiar estado a fallo
            break;      // Termina el juego si falla
        }
    }

    // MENSAJE FINAL SEGÚN EL RESULTADO
    if (exito) {
        printf("¡Felicidades! Adivinaste correctamente todas las posiciones.\n");
    } else {
        printf("Mejor suerte la próxima vez.\n");
    }

    return 0;
}
