#include <stdio.h>

// Leer tres números y calcular la multiplicación de los tres

int main()
{

    int numbers[3];
    int i, multiplication = 1;

    // Ingresar los números  almacenarlos en un array
    printf("Ingresar 3 números para obtener su multiplicación: \n");
    for (i = 0; i < 3; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sumar los numeros contenidos en el array, que son los 3 ingresados por el usuario
    for (i = 0; i < 3; i++)
    {
        multiplication *= numbers[i];
    }

    printf("La multiplicación de los números es: %d\n", multiplication);
}