#include <stdio.h>

int main()
{
    int water, spaghetti, cookingTime;
    char option;

    printf("¿Cómo te gustaría cocinar el espagueti?\n");
    printf("a) Al dente (6 minutos)\n");
    printf("b) Normal (8 minutos)\n");
    printf("c) Suave (10 minutos)\n");
    printf("Elige una opción (a/b/c): ");
    scanf(" %c", &option);

    switch (option)
    {
    case 'a':
        cookingTime = 6;
        break;
    case 'b':
        cookingTime = 8;
        break;
    case 'c':
        cookingTime = 10;
        break;
    default:
        printf("Opción no válida. Cocinaremos 8 minutos por defecto.\n");
        cookingTime = 8;
    }

    // Solicitar cantidad de agua y espagueti
    printf("¿Cuántos litros de agua vas a usar para hervir? (Ej. 2): ");
    scanf("%d", &water);

    printf("¿Cuántos gramos de espagueti vas a cocinar? (Ej. 200): ");
    scanf("%d", &spaghetti);
 
    printf("Paso 1: Hervir %d litros de agua.\n", water);
    printf("Esperando a que el agua hierva...\n");

    // Simular tiempo de espera para hervir
    for (int i = 0; i < 3; i++)
    {
        printf(".\n");
    }

    printf("¡El agua está hirviendo!\n");

    printf("Paso 2: Agregar %d gramos de espagueti al agua hirviendo.\n", spaghetti);

    printf("Paso 3: Cocinar el espagueti durante %d minutos.\n", cookingTime);
    for (int i = 0; i < cookingTime; i++)
    {
        printf("Cocinando... %d minutos.\n", i + 1);
    }

    printf("Paso 4: Escurrir el espagueti.\n");

    printf("Paso 5: Servir el espagueti en un plato.\n");

    printf("¡Listo! ¡Disfruta tu espagueti!\n");

    return 0;
}
