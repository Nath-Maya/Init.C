#include <stdio.h>

// Determinar los pecados capitales, los días de la semana, las notas de la
// guitarra y los colores del arcoíris, las palabras del sermón, los mares del
// universo y las maravillas del mundo de acuerdo a una codificación de 1 a 7

int main() {

    int option;


    const char *pecados[7] = {
        "Soberbia", "Avaricia", "Lujuria", "Ira", "Gula", "Envidia", "Pereza"
    };

    const char *dias[7] = {
        "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"
    };

    const char *notas[7] = {
        "Mi", "La", "Re", "Sol", "Si", "Do", "Fa"
    };

    const char *colores[7] = {
        "Rojo", "Naranja", "Amarillo", "Verde", "Azul", "Índigo", "Violeta"
    };

    const char *palabras[7] = {
        "Fe", "Esperanza", "Amor", "Paz", "Caridad", "Justicia", "Perdón"
    };

    const char *mares[7] = {
        "Mar de Japón", "Mar Caribe", "Mar Mediterráneo", "Mar del Norte", "Mar Rojo", "Mar de Bering", "Mar de Coral"
    };

    const char *maravillas[7] = {
        "Gran Muralla China", "Chichén Itzá", "Cristo Redentor", "Machu Picchu", "Petra", "Coliseo", "Taj Mahal"
    };


    printf("Selecciona una categoría del 1 al 7:\n");
    printf("1- Pecados capitales\n");
    printf("2- Días de la semana\n");
    printf("3- Notas de la guitarra\n");
    printf("4- Colores del arcoíris\n");
    printf("5- Palabras del sermón\n");
    printf("6- Mares del universo\n");
    printf("7- Maravillas del mundo\n");

    printf("Ingresa tu opción: ");
    scanf("%d", &option);


    if (option < 1 || option > 7) {
        printf("Debes elegir un número entre 1 y 7.\n");
        return 1;
    }

   
    int index;
    printf("Ingresa el index del elemento que deseas ver: ");
    scanf("%d", &index);


    if (index < 1 || index > 7) {
        printf("Index no valido. Debes elegir un número entre 1 y 7.\n");
        return 1;
    }


    const char *selected_array;
    switch (option) {
        case 1: selected_array = pecados[index - 1]; break;
        case 2: selected_array = dias[index - 1]; break;
        case 3: selected_array = notas[index - 1]; break;
        case 4: selected_array = colores[index - 1]; break;
        case 5: selected_array = palabras[index - 1]; break;
        case 6: selected_array = mares[index - 1]; break;
        case 7: selected_array = maravillas[index - 1]; break;
    }

    printf("Elemento seleccionado: %s\n", selected_array);

    return 0;
}
