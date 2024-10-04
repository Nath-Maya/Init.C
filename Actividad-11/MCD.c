#include <stdio.h>

// FUNCION POR VALOR
int gcdByValue(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// FUNCION POR REFERENCIA
void gcdByReference(int *a, int *b) {
    while (*b != 0) {
        int temp = *b;
        *b = *a % *b;
        *a = temp;
    }
}

int main() {
    int num1, num2, result;

 
    printf("Introduce dos números para calcular el MCD: ");
    scanf("%d %d", &num1, &num2);

    // RESULADO POR VALOR
    result = gcdByValue(num1, num2);
    printf("MCD (por valor) de %d y %d es: %d\n", num1, num2, result);

    // RESULTADO POR REFERENCIA
    gcdByReference(&num1, &num2); 
    printf("MCD (por referencia) es: %d\n", num1);

    return 0;
}
