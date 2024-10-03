#include <stdio.h>

// Para un conjunto de n estudiantes definidas por el usuario, y de acuerdo a
// las notas escritas por el usuario (1…5) , determinar para cada uno de ellos si
// el curso fue reprobado (R >=0.0, <3.0), aprobado Aceptable (A >=3.0, <3.5),
// Bien (B, >=3.5, <4.0) , Satisfactoriamente (S, >=4.0, <4.5) o Excelente (E,
// >=4.5<=5.0). Calcular el promedio de las notas de los estudiantes y el
// número de estudiantes agrupados por las notas (en letras).


int main() {
    int n, i;
    float notas[100];
    int conteo[5] = {0}; 
    float sumaNotas[5] = {0.0};

    printf("¿Cuántos estudiantes desea evaluar? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Ingrese la nota del estudiante %d (1-5): ", i + 1);
        scanf("%f", &notas[i]);

        if (notas[i] >= 0.0 && notas[i] < 3.0) {
            conteo[0]++;
            sumaNotas[0] += notas[i];
        } else if (notas[i] >= 3.0 && notas[i] < 3.5) {
            conteo[1]++;
            sumaNotas[1] += notas[i];
        } else if (notas[i] >= 3.5 && notas[i] < 4.0) {
            conteo[2]++;
            sumaNotas[2] += notas[i];
        } else if (notas[i] >= 4.0 && notas[i] < 4.5) {
            conteo[3]++;
            sumaNotas[3] += notas[i];
        } else if (notas[i] >= 4.5 && notas[i] <= 5.0) {
            conteo[4]++;
            sumaNotas[4] += notas[i];
        }
    }

    for (i = 0; i < 5; i++) {
        if (conteo[i] > 0) {
            printf("Promedio de la categoría %d: %.2f\n", i, sumaNotas[i] / conteo[i]);
        }
    }

    return 0;
}
