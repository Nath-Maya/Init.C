#include <stdio.h>

// De acuerdo a una hora escrita por el usuario, determinar si es de día, de tarde, de noche o de madrugada

int main() {
    int hour, minutes;

    printf("Ingrese la hora en formato 24 horas (HH:MM): ");
    scanf("%d:%d", &hour, &minutes);

    if (hour >= 0 && hour < 24 && minutes >= 0 && minutes < 60) {
        printf("La hora es: %02d:%02d\n", hour, minutes);
        
        if (hour >= 6 && hour < 12) {
            printf("Es de mañana (día).\n");
        } else if (hour >= 12 && hour < 18) {
            printf("Es de tarde.\n");
        } else if (hour >= 18 && hour < 24) {
            printf("Es de noche.\n");
        } else {
            printf("Es de madrugada.\n");
        }
    } else {
        printf("Hora o minutos mal ingresados.\n");
    }

    return 0;
}
