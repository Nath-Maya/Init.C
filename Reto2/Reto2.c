#include <stdio.h>

// Programa: Se ingresan los pagos del primer semestre del año. Nos suministra el mes que mas se pago, el mes que menos se pago y el promedio.


float calcularPromedio(int pagos[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += pagos[i];
    }
    return (float)suma / n;
}

int main() {
    int pagos[6];  
    const char* meses[6] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio"};
    int maxPago, minPago;
    int mesMayor, mesMenor;
    float promedio;

   
    for (int i = 0; i < 6; i++) {
        printf("Ingrese el valor del pago de %s: ", meses[i]);
        scanf("%d", &pagos[i]);
    }

    
    maxPago = pagos[0];
    minPago = pagos[0];
    mesMayor = 0;
    mesMenor = 0;

    
    for (int i = 1; i < 6; i++) {
        if (pagos[i] > maxPago) {
            maxPago = pagos[i];
            mesMayor = i;
        }
        if (pagos[i] < minPago) {
            minPago = pagos[i];
            mesMenor = i;
        }
    }

   
    promedio = calcularPromedio(pagos, 6);

    
    printf("\nMes con mayor pago: %s con %d\n", meses[mesMayor], maxPago);
    printf("Mes con menor pago: %s con %d\n", meses[mesMenor], minPago);
    printf("Promedio de pagos: %.2f\n", promedio);

    return 0;
}