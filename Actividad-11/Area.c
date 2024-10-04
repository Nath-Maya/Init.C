#include <stdio.h>

// AREA - PASO POR VALOR
int calculateArea(int length, int width) {
    return length * width;
}

// PERIMETRO - PASO POR REFERENCIA
void calculatePerimeter(int length, int width, int *perimeter) {
    *perimeter = 2 * (length + width);
}

int main() {
    int length, width, area, perimeter;


    printf("Introduce el largo del rectángulo: ");
    scanf("%d", &length);
    printf("Introduce el ancho del rectángulo: ");
    scanf("%d", &width);


    area = calculateArea(length, width);
    printf("El área del rectángulo es: %d\n", area);


    calculatePerimeter(length, width, &perimeter);
    printf("El perímetro del rectángulo es: %d\n", perimeter);

    return 0;
}
