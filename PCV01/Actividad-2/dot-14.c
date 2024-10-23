#include <stdio.h>

int main() {
    int x = 15;
    int y = 4;

    // División entera
    int resultado_entero = x / y;
    printf("El resultado de x / y (división entera) es: %d\n", resultado_entero);

    // División de punto flotante
    float resultado_flotante = (float)x / y;
    printf("El resultado de (float)x / y (división de punto flotante) es: %.2f\n", resultado_flotante);

    return 0;
}