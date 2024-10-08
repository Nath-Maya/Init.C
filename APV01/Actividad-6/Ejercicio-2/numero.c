#include <stdio.h>

// De acuerdo a una nota escrita por el usuario, determinar si un número es positivo, negativo o cero

int main()
{
    float note = 0;

    printf("Ingresar una nota: ");
    scanf("%f", &note);

    if (note > 0)
    {
        printf("La nota %.2f  es un número positivo.\n", note);
    }
    else if (note < 0)
    {
        printf("La nota %.2f  es un número negativo.\n", note);
    }
    else
    {
        printf("La nota es cero.\n");
    }

    return 0; 
}
