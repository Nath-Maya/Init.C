#include <stdio.h>

//Preparar una comida tipica del departamento

int main() {
    int grams_per_empanada_dough = 15; 
    int grams_per_empanada_filling = 20; 
    int empanada_count;
    int total_dough;
    int total_filling;
    int filling; 

    printf("Preparando Empanadas del Valle del Cauca\n");
    printf("¿Cuántas empanadas deseas preparar? ");
    scanf("%d", &empanada_count);

    total_dough = grams_per_empanada_dough * empanada_count;
    total_filling = grams_per_empanada_filling * empanada_count;

    printf("Elige el relleno:\n");
    printf("1. Carne\n");
    printf("2. Pollo\n");
    printf("3. Queso\n");
    printf("Opción: ");
    scanf("%d", &filling);

    printf("Paso 1: Preparar la masa con %d gramos de harina.\n", total_dough);

    switch (filling) {
        case 1:
            printf("Paso 2: Cocinar, preferiblemente en pitadora la carne %d gramos de carne para %d empanadas.\n", total_filling, empanada_count);
            break;
        case 2:
            printf("Paso 2: Cocinar %d gramos de pollo para %d empanadas.\n", total_filling, empanada_count);
            break;
        case 3:
            printf("Paso 2: Rallar o cortar en cubos el queso %d gramos de queso para %d empanadas.\n", total_filling, empanada_count);
            break;
        default:
            printf("Opción no válida.\n");
            return 1;
    }

    printf("Paso 3: Dejar enfriar la mezcla de relleno.\n");
    printf("Paso 4: Formar las empanadas con la masa y rellenarlas.\n");
    printf("Paso 5: Calentar aceite en una sartén.\n");
    printf("Paso 6: Freír las empanadas durante 5 minutos hasta que estén doradas.\n");
    printf("Paso 7: Sacar las empanadas del aceite y escurrir.\n");
    printf("¡Listo! Tus empanadas Vallunas están preparadas para disfrutar.\n");

    return 0;
}
