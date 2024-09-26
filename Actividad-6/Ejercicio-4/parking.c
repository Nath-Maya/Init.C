#include <stdio.h>

// En un estacionamiento se cobran $1.500 por hora y $500 por fracción de 15
// minutos. Determine cuanto debe pagar un cliente por el estacionamiento de
// su vehículo, conociendo el tiempo de estacionamiento en horas y minutos.

int main()
{

    int hourEntry, minutesEntry, hourDeparture, minutesDeparture;

    printf("PARKING \n");
    printf("Ingrese la hora de entrada del vehiculo en formato 24 horas (HH:MM): \n");
    scanf("%d:%d", &hourEntry, &minutesEntry);
    printf("Ingrese la hora de salida del vehiculo: \n");
    scanf("%d:%d", &hourDeparture, &minutesDeparture);

    int hoursTotal = hourDeparture - hourEntry;
    int fractionMinutes = (minutesDeparture - minutesEntry) % 15;

    int totalParking = (hoursTotal * 15000) + (fractionMinutes + 500);

    printf("TOTAL PARKING: $%d \n", totalParking);

    return 0;
}