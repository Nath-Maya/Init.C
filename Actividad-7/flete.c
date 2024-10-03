#include <stdio.h>

float calculateVolumeWeight(int width, int length, int height);
float getRateByCity(char destinationCity);
float calculateShippingCost(float volumeWeight, float boxWeight, float rate);

int main() {
    int anchoCaja, largoCaja, altoCaja;
    float pesoVolumen, pesoCaja, totalFlete, tarifa;
    char ciudadDestino;

    printf("Ingrese las dimensiones de la caja (cm):\n");
    printf("Ancho de la caja: ");
    scanf("%d", &anchoCaja);
    printf("Largo de la caja: ");
    scanf("%d", &largoCaja);
    printf("Alto de la caja: ");
    scanf("%d", &altoCaja);

    pesoVolumen = calculateVolumeWeight(anchoCaja, largoCaja, altoCaja);

    printf("Ingrese el peso real de la caja (kg): ");
    scanf("%f", &pesoCaja);

    printf("Ingrese la ciudad de destino\n (C para Cali, B para Bogota, M para Medellin, A para Barranquilla): ");
    scanf(" %c", &ciudadDestino);

    tarifa = getRateByCity(ciudadDestino);

    totalFlete = calculateShippingCost(pesoVolumen, pesoCaja, tarifa);

    printf("\nDETALLES COTIZACION:\n");
    printf("Peso volumétrico: %.2f kg\n", pesoVolumen);
    printf("Tarifa de la ciudad %c: %.2f\n", ciudadDestino, tarifa);
    printf("COSTO TOTAL FLETE: %.2f\n", totalFlete);

    return 0;
}

float calculateVolumeWeight(int width, int length, int height) {
    return (width * length * height) / 5000.0;
}

float getRateByCity(char destinationCity) {
    float rate;
    switch (destinationCity) {
        case 'C':
            rate = 12.0;  
            break;
        case 'B':
            rate = 18.0; 
            break;
        case 'M':
            rate = 16.0; 
            break;
        case 'A':
            rate = 14.0; 
            break;
        default:
            rate = 0.0;
            printf("Ciudad no reconocida, tarifa no disponible.\n");
    }
    return rate;
}

float calculateShippingCost(float volumeWeight, float boxWeight, float rate) {
    float effectiveWeight;
    if (volumeWeight > boxWeight) {
        effectiveWeight = volumeWeight;
    } else {
        effectiveWeight = boxWeight;
    }
    return effectiveWeight * rate;
}
