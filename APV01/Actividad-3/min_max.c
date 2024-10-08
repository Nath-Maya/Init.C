#include <stdio.h>

// Leer 5 números y decidir cuáles no son ni el mayor ni el menor (si existen)

int main() {
    int numbers[5]; 
    int i, max, min;

    // Ingresar los números y almacenarlos en un array
    printf("Ingresar 5 números: \n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];
    min = numbers[0];

    // Iterar en el array para encontrar el mayor y el menor
    for (i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // Imprimir resultado de numeros difrentes al mayor y menor
    printf("Números diferentes al menor y mayor de los números ingresados: \n");
    for (i = 0; i < 5; i++) {
        if (numbers[i] != max && numbers[i] != min) {
            printf("%d ", numbers[i]);
        }
    }

    printf("\n");
    return 0;
}
