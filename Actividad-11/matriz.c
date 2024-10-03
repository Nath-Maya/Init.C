#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Cree una matriz con N*M números aleatorios y calcule la suma de las filas,
// las columnas y la suma total, toda la información debe quedar en la misma
// matriz, debe visualizar la matriz. (Ayuda: la matriz debe ser de tamaño
// N+1*M+1).

int main() {
    int n, m;
    printf("Ingrese numeros de filas: ");
    scanf("%d", &n);
    printf("Ingrese numero de columnas: ");
    scanf("%d", &m);

    int matrix[n+1][m+1];

    srand(time(0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < m; j++) {
            rowSum += matrix[i][j];
        }
        matrix[i][m] = rowSum;
    }

    for (int j = 0; j < m; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += matrix[i][j];
        }
        matrix[n][j] = colSum;
    }

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += matrix[i][m];
    }
    matrix[n][m] = totalSum;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
