#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Cree una matriz de N*M y otra de M*P. Llénelas con números aleatorios.
// Calcule la multiplicación de las matrices. Ayuda: La respuesta se almacene
// en una matriz de N*P.

int main() {
    int n, m, p;

    printf("Ingrese el número de filas para la primera matriz (N): ");
    scanf("%d", &n);
    printf("Ingrese el número de columnas para la primera matriz y filas para la segunda matriz (M): ");
    scanf("%d", &m);
    printf("Ingrese el número de columnas para la segunda matriz (P): ");
    scanf("%d", &p);

    int matrix1[n][m], matrix2[m][p], resultMatrix[n][p];

    srand(time(0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix1[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < m; i++) {
