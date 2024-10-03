#include <stdio.h>

// Haga un programa que solicite los datos de altura y peso, calcule el índice de
// masa corporal y determine si la persona esta en peso bajo, en peso normal o
// en sobrepeso. Debe preguntar si desea continuar después de cada cálculo,
// al salir, debe determinar cuántos quedaron en cada categoría y cuál es el
// promedio de IMC de cada categoría.



void calculateIMC(float height, float weight, float* imc, char* category);
void printResults(int lowCount, float lowSum, int normalCount, float normalSum, int overweightCount, float overweightSum);

int main() {
    float height, weight, imc;
    char category, continueCalc;
    int lowCount = 0, normalCount = 0, overweightCount = 0;
    float lowSum = 0, normalSum = 0, overweightSum = 0;

    do {
        printf("Ingrese la altura (mt): ");
        scanf("%f", &height);
        printf("Ingrese el peso (kg): ");
        scanf("%f", &weight);

        calculateIMC(height, weight, &imc, &category);

        if (category == 'L') {
            lowCount++;
            lowSum += imc;
        } else if (category == 'N') {
            normalCount++;
            normalSum += imc;
        } else if (category == 'O') {
            overweightCount++;
            overweightSum += imc;
        }

        printf("\n¿Desea realizar otro cálculo de IMC? (S/N): ");
        scanf(" %c", &continueCalc);

    } while (continueCalc == 'S' || continueCalc == 's');

    printResults(lowCount, lowSum, normalCount, normalSum, overweightCount, overweightSum);

    return 0;
}

void calculateIMC(float height, float weight, float* imc, char* category) {
    *imc = weight / (height * height);

    if (*imc < 18.5) {
        printf("IMC: %.2f - Peso BAJO\n", *imc);
        *category = 'L';  
    } else if (*imc >= 18.5 && *imc < 24.9) {
        printf("IMC: %.2f - Peso NORMAL\n", *imc);
        *category = 'N';  
    } else {
        printf("IMC: %.2f - SOBREPESO\n", *imc);
        *category = 'O'; 
    }
}

void printResults(int lowCount, float lowSum, int normalCount, float normalSum, int overweightCount, float overweightSum) {
    printf("\nESTADISTICAS O RESUMEN:\n");
    
    if (lowCount > 0) {
        printf("Peso bajo: %d personas, Promedio IMC: %.2f\n", lowCount, lowSum / lowCount);
    } else {
        printf("Peso bajo: 0 personas\n");
    }
    
    if (normalCount > 0) {
        printf("Peso normal: %d personas, Promedio IMC: %.2f\n", normalCount, normalSum / normalCount);
    } else {
        printf("Peso normal: 0 personas\n");
    }

    if (overweightCount > 0) {
        printf("Sobrepeso: %d personas, Promedio IMC: %.2f\n", overweightCount, overweightSum / overweightCount);
    } else {
        printf("Sobrepeso: 0 personas\n");
    }
}
