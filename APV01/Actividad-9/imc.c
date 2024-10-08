#include <stdio.h>

// Haga un programa que solicite los datos de altura y peso, calcule el índice de
// masa corporal y determine si la persona esta en peso bajo, en peso normal o
// en sobrepeso. Debe preguntar si desea continuar después de cada cálculo,
// al salir, debe determinar cuántos quedaron en cada categoría y cuál es el
// promedio de IMC de cada categoría

int main() {
    int n, i;
    float altura[100], peso[100], imc[100];
    int conteo[3] = {0, 0, 0}; 
    float sumaIMC[3] = {0.0, 0.0, 0.0}; 

    printf("¿Cuántas personas desea evaluar? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Ingrese altura de la persona %d (m): ", i + 1);
        scanf("%f", &altura[i]);
        printf("Ingrese peso de la persona %d (kg): ", i + 1);
        scanf("%f", &peso[i]);

        imc[i] = peso[i] / (altura[i] * altura[i]);

        if (imc[i] < 18.5) {
            conteo[0]++;
            sumaIMC[0] += imc[i];
        } else if (imc[i] < 24.9) {
            conteo[1]++;
            sumaIMC[1] += imc[i];
        } else {
            conteo[2]++;
            sumaIMC[2] += imc[i];
        }
    }

    for (i = 0; i < 3; i++) {
        if (conteo[i] > 0) {
            printf("Promedio IMC para categoría %d: %.2f\n", i, sumaIMC[i] / conteo[i]);
        }
    }

    return 0;
}
