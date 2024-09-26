#include <stdio.h>

// Determinar si un año es bisiesto.

int main() {

    int year;

    printf("Ingrese un año para saber si es bisiesto: \n");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Es bisiesto.\n");
    } else {
        printf("No es bisiesto.\n");
    }

    return 0;
}
