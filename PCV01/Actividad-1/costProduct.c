// Hacer un algoritmo que calcule e imprima el costo de producción de un artículo, teniendo como datos la descripción y el número de unidades producidas. El costo se obtiene multiplicando el número de unidades producidas por un factor de costo de materiales de 3.5, y sumando al producto un costo fijo de 10700.

#include <stdio.h>

float calculateProductionCost(int unitsProduction, int costFixed, float materialCost) {
    return (unitsProduction * materialCost) + costFixed;
}

int main() {
    char descriptionProduct[50]; // Cambiado a un arreglo de caracteres para manejar la descripción
    int unitsProduction, costFixed = 10700;
    float materialCost = 3.5, productionCost;

    // Entradas
    printf("Ingrese la descripcion del producto: \n");
    scanf("%s", descriptionProduct); // Usando %s para leer una cadena

    printf("Ingrese la cantidad que desea producir: \n");
    scanf("%d", &unitsProduction);

    // Calcular costo de producción
    productionCost = calculateProductionCost(unitsProduction, costFixed, materialCost);

    // Imprimir resultado
    printf("El costo de produccion para %s es: %.2f\n", descriptionProduct, productionCost);

    return 0;
}
