#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Cree dos matrices de N*M y llénelas con números aleatorios. Calcule la
// suma de matrices. Ayuda: La respuesta se almacene en una matriz de N*M.

int main() {
    int n, m;

    printf("Ingrese el número de filas: ");
    scanf("%d", &n);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &m);

    int matrix1[n][m], matrix2[n][m], sumMatrix[n][m];

    srand(time(0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix1[i][j] = rand() % 100;
            matrix2[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nPrimera matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%5d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nSegunda matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%5d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nSuma de las matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%5d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
