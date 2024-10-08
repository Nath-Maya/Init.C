#include <stdio.h>

// Leer 5 números y decidir cuáles son IMPARES

int main()
{

    int numbers[5]; // Declaro el array donde almacenare los numeros
    int i;

    // Ingresar los numeros y almacenarlos en un array
    printf("Ingresar 5 numeros: \n");
    for (i = 0; i < 5; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Iterar en el array y de acuerdo a la condicion, revisar cuales numeros son impar
    printf("Son Numeros impares: \n");
    for (i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            printf("%d ", numbers[i]);
        }
    }


    printf("\n");
    return 0;
}
