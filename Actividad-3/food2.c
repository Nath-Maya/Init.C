#include <stdio.h>

//Hacer una comida típica de otro departamento

int main() {
    int cups_of_rice = 2; 
    int cups_of_coconut_milk = 2; 
    int cups_of_water = 1; 
    int salt = 1; 
    int total_servings;

    printf("Preparando Arroz con Coco\n");


    do {
        printf("¿Cuántas porciones deseas hacer? ");
        scanf("%d", &total_servings);

        if (total_servings <= 0) {
            printf("Por favor, ingresa un número válido de porciones.\n");
        }
    } while (total_servings <= 0); 

   
    cups_of_rice *= total_servings;
    cups_of_coconut_milk *= total_servings;
    cups_of_water *= total_servings;
    salt *= total_servings;

    printf("Paso 1: Mezclar %d tazas de arroz, %d tazas de leche de coco, %d tazas de agua y %d cucharaditas de sal.\n", 
           cups_of_rice, cups_of_coconut_milk, cups_of_water, salt);
    printf("Paso 2: Llevar a ebullición y luego reducir el fuego.\n");
    printf("Paso 3: Cocinar a fuego lento hasta que el arroz esté tierno y el líquido se haya absorbido.\n");
    printf("¡Listo! Tu arroz con coco está listo para disfrutar.\n");

    return 0;
}
