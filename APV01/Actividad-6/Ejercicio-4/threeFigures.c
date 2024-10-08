#include <stdio.h>

// Diseñe un algoritmo que lea un número de tres cifras y determine si es igual
// al revés del número.

int main() {
    int number, centenas, decenas, unidades, invested;

    printf("Ingresar un número de tres cifras: ");
    scanf("%d", &number);

    centenas = number / 100;
    decenas = (number % 100) / 10;
    unidades = number % 10;

    invested = (unidades * 100) + (decenas * 10) + centenas;

    if (number == invested) {
        printf("El número es igual al reves.\n");
    } else {
        printf("El número NO es igual al reves.\n");
    }

    return 0;
}
