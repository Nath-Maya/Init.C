#include <stdio.h>

// Determinar qué mes del año es de acuerdo a un número entre 1 y 12

int main() {
    int month;

    printf("Por favor, ingrese un número (1-12) para indicar el mes: ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) {
        switch (month) {
            case 1:
                printf("Enero\n");
                break;
            case 2:
                printf("Febrero\n");
                break;
            case 3:
                printf("Marzo\n");
                break;
            case 4:
                printf("Abril\n");
                break;
            case 5:
                printf("Mayo\n");
                break;
            case 6:
                printf("Junio\n");
                break;
            case 7:
                printf("Julio\n");
                break;
            case 8:
                printf("Agosto\n");
                break;
            case 9:
                printf("Septiembre\n");
                break;
            case 10:
                printf("Octubre\n");
                break;
            case 11:
                printf("Noviembre\n");
                break;
            case 12:
                printf("Diciembre\n");
                break;
            default:

                break;
        }
    } else {
        printf("Solo ingresar numeros entre el 1 y 12\n");
    }

    return 0;
}
