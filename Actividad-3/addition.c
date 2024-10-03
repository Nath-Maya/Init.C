#include <stdio.h>

// Leer tres números y calcular la suma

int main()
{

    int numbers[3];
    int i, suma = 0;

    // Ingresar los números  almacenarlos en un array
    printf("Ingresar 3 números para obtener su suma total: \n");
    for (i = 0; i < 3; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sumar los numeros contenidos en el array, que son los 3 ingresados por el usuario
    for (i = 0; i < 3; i++)
    {
        suma += numbers[i];
    }

    printf("La suma de los números es: %d\n", suma);
}