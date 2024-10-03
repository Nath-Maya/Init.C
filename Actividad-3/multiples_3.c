#include <stdio.h>

// Leer 5 números y decidir cuáles son múltiplos de 3

int main() {
    int numbers[5];
    int i;


    printf("Ingresar 5 numeros: \n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Números ingresados: \n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Iterar en el array y verificar cuáles son múltiplos de 3
    printf("Son Múltiplos de 3: \n");
    int found = 0; // Contador para verificar si hay múltiplos
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 3 == 0) {
            printf("%d ", numbers[i]);
            found = 1; // Se encontró al menos un múltiplo
        }
    }
    
    if (!found) {
        printf("No hay números múltiplos de 3\n");
    }

    printf("\n");
    return 0;
}
