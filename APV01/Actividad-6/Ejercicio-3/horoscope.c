#include <stdio.h>

// Determinar que signo del horóscopo es de acuerdo al mes definido entre 1 y
// 12 y al día definido (tenga en cuenta los meses de 28, 30 y 31 días)

int main()
{
    int month;
    int day;

    printf("¿Quieres saber el signo del horóscopo, de acuerdo al mes y día? \n");
    printf("Por favor, ingrese un número (1-12) para indicar el mes: ");
    scanf("%d", &month);


    if (month < 1 || month > 12) {
        printf("Ingrese un mes válido, entre 1 y 12.\n");
        return 1; 
    }


    if (month == 2) {
        printf("Por favor, ingrese el día del mes, entre 1 y 28: ");
        scanf("%d", &day);
        if (day < 1 || day > 29) {
            printf("Día inválido para Febrero.\n");
            return 1;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Por favor, ingrese el día del mes, entre 1 y 30: ");
        scanf("%d", &day);
        if (day < 1 || day > 30) {
            printf("Dia no corresponde al mes seleccionado.\n");
            return 1;
        }
    } else {
        printf("Por favor, ingrese el día del mes, entre 1 y 31: ");
        scanf("%d", &day);
        if (day < 1 || day > 31) {
            printf("Dia no corresponde al mes seleccionado.\n");
            return 1;
        }
    }

    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("Tu signo es ARIES.\n");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("Tu signo es TAURO.\n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("Tu signo es GEMINIS.\n");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("Tu signo es CÁNCER.\n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Tu signo es LEO.\n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Tu signo es VIRGO.\n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Tu signo es LIBRA.\n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Tu signo es ESCORPIO.\n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Tu signo es SAGITARIO.\n");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Tu signo es CAPRICORNIO.\n");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Tu signo es ACUARIO.\n");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("Tu signo es PISCIS.\n");
    }

    return 0;
}
