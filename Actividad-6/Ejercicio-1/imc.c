#include <stdio.h>
#include <math.h>

// Solicite los datos de altura y peso, calcule el índice de masa corporal y
// determine si la persona esta en el peso normal.

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

        if (IMC >= 18.5 && IMC < 25.0)
        {
            printf("Se encuentra dentro del rango de peso normal o SALUDABLE.\n");
        }
        else
        {
            printf("Puede encontrarse en obesidad o peso insuficioente.\n");
        }
    }

    return 0;
}
