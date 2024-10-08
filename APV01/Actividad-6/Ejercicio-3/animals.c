#include <stdio.h> // Agregar la biblioteca necesaria
#include <stdint.h>

int main()
{
    int category;

    printf("Clasificacion del animal de acuerdo a: \n\n");
    printf("1- Cantidad de patas \n");
    printf("2- Forma de nacer \n");
    printf("3- Tipo de alimentacion \n\n");
    printf("Seleccione una categoria:\n");

    scanf("%d", &category);

    if (category == 1)
    {
        printf("1. 0 patas: Serpientes, anguilas, caracol, medusa, etc.\n");
        printf("2. 2 patas: aves, humanos.\n");
        printf("3. 4 patas: leon, caballo, perro, gato, etc. \n");
        printf("4. Otras cantidades, como 6 patas (insectos) o 8 patas (arácnidos)\n");
    }
    else if (category == 2)
    {
        printf("Clasificación de los animales por su forma de nacer:\n\n");
        printf("Ovíparos: animales que nacen de huevos.\n");
        printf("Vivíparos: animales que dan a luz crías vivas.\n");
        printf("Ovovivíparos: animales que ponen huevos que eclosionan dentro del cuerpo.\n");
    }
    else if (category == 3)
    {
        printf("Clasificación de la alimentación de los animales:\n\n");
        printf("1. Herbívoros: Animales que se alimentan principalmente de plantas.\n");
        printf("2. Carnívoros: Animales que se alimentan principalmente de otros animales.\n");
        printf("3. Omnívoros: Animales que comen tanto plantas como carne.\n");
        printf("4. Detritívoros: Animales que se alimentan de materia orgánica en descomposición.\n");
        printf("5. Saprófitos: Animales que se alimentan de materia muerta y descompuesta.\n");
    }
    else
    {
        printf("Opcion no valida");
    }

    return 0;
}
