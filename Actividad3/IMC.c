#include <stdio.h>
#include <math.h>

//Calcular el indice de Masa corportal (IMC)

int main() {
    float weight = 0, height = 0, IMC = 0;

    printf("Por favor, ingresa tu peso en kgs: ");
    scanf("%f", &weight);

    printf("Por favor, ingresa tu estatura en metros: ");
    scanf("%f", &height);

    if (weight > 0 && height > 0) {
        IMC = weight / pow(height, 2);
        printf("Tu IMC es: %.2f\n", IMC);

        if (IMC < 18.5) {
            printf("Se encuentra dentro del rango de peso INSUFICIENTE.\n");
        } else if (IMC >= 18.5 && IMC < 25.0) {
            printf("Se encuentra dentro del rango de peso normal o SALUDABLE.\n");
        } else if (IMC >= 25.0 && IMC < 30.0) {
            printf("Se encuentra dentro del rango de SOBREPESO.\n");
        } else {
            printf("Se encuentra dentro del rango de OBESIDAD.\n");
        }
    } else {
        printf("Por favor ingresar valores mayores a 0.\n");
    }

    return 0;
}
