#include <stdio.h>

// De acuerdo a una nota escrita por el usuario, determinar si un número es positivo

int main()
{
    float note = 0;

    printf("Ingresar una nota: ");
    scanf("%f", &note);

    if (note > 0)
    {
        printf("La nota %.2f que ingresó es un número positivo.\n", note);
    }
    else
    {
        printf("La nota es negativa.\n");
    }

    return 0; 
}

