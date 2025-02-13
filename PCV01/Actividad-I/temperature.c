// Hacer un algoritmo que lea una temperatura en grados centígrados y obtenga e imprima la temperatura Fahrenheit equivalente.

#include <stdio.h>

float convertirACelsius(float temperaturaCentigrados) {
    return (temperaturaCentigrados * 9/5) + 32;
}

int main() {
    // Definir variable
    float temperaturaCentigrados, temperaturaFahrenheit;

    // Entradas
    printf("Ingrese la temperatura en grados centígrados: \n");
    scanf("%f", &temperaturaCentigrados);

    // Proceso
    temperaturaFahrenheit = convertirACelsius(temperaturaCentigrados);

    // Salida
    printf("La temperatura en Fahrenheit es: %.2f°F\n", temperaturaFahrenheit);

    return 0;
}

