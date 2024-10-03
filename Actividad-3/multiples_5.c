#include <stdio.h>

// • Leer un número y determinar si es múltiplo de 5

int main()
{

    int number;

    printf("Ingresa un número y sabremos si es múltiplo de 5: \n");
    scanf("%d", &number);

    if (number % 5 == 0)
    {
        printf("El número %d es múltiplo de 5\n", number);
    }
    else
    {
        printf("El número que ingreso no es múltiplo de 5");
    }

    printf("\n");
    return 0;
}
