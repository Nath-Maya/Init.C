#include <stdio.h>
#include <math.h>

// Solicite los datos de altura y peso, calcule el índice de masa corporal y
// determine si la persona esta por debajo del peso normal, en el peso normal o en sobrepeso.

int main()
{
    float weight = 0, height = 0, IMC = 0;

    printf("Por favor, ingresa tu peso en kgs: ");
    scanf("%f", &weight);

    printf("Por favor, ingresa tu estatura en metros: ");
    scanf("%f", &height);

    if (weight > 0 && height > 0)
    {
        IMC = weight / pow(height, 2);
        printf("Tu IMC es: %.2f\n", IMC);

        if (IMC < 16.0)
        {
            printf("Delgadez Muy Severa.\n");
        }
        else if (IMC >= 16.0 && IMC < 17.0)
        {
            printf("Delgadez Severa.\n");
        }
        else if (IMC >= 17.0 && IMC < 18.5)
        {
            printf("Delgadez Moderada.\n");
        }
        else if (IMC >= 18.5 && IMC < 25.0)
        {
            printf("Peso Normal.\n");
        }
        else if (IMC >= 25.0 && IMC < 30.0)
        {
            printf("Sobrepeso.\n");
        }
        else if (IMC >= 30.0 && IMC < 35.0)
        {
            printf("Obesidad Moderada (Grado I).\n");
        }
        else if (IMC >= 35.0 && IMC < 40.0)
        {
            printf("Obesidad Severa (Grado II).\n");
        }
        else
        {
            printf("Obesidad Mórbida (Grado III).\n");
        }
    }
    else
    {
        printf("Los valores ingresados no son válidos.\n");
    }

    return 0;
}
