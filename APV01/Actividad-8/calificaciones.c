#include <stdio.h>

// Para un conjunto de n estudiantes definidas por el usuario, y de acuerdo a
// las notas escritas por el usuario (1…5) , determinar para cada uno de ellos si
// el curso fue reprobado (R >=0.0, <3.0), aprobado Aceptable (A >=3.0, <3.5),
// Bien (B, >=3.5, <4.0) , Satisfactoriamente (S, >=4.0, <4.5) o Excelente (E,
// >=4.5<=5.0). Calcular el promedio de las notas de los estudiantes y el
// número de estudiantes agrupados por las notas (en letras).

int main() {
    int n, i;
    float nota, sumaNotas = 0;
    int reprobado = 0, aceptable = 0, bien = 0, satisfactorio = 0, excelente = 0;

    printf("Cantidad de estudiantes en la clase ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nota del estudiante %d: ", i + 1);
        scanf("%f", &nota);

        sumaNotas += nota;

        if (nota >= 0.0 && nota < 3.0) {
            reprobado++;
        } else if (nota >= 3.0 && nota < 3.5) {
            aceptable++;
        } else if (nota >= 3.5 && nota < 4.0) {
            bien++;
        } else if (nota >= 4.0 && nota < 4.5) {
            satisfactorio++;
        } else if (nota >= 4.5 && nota <= 5.0) {
            excelente++;
        }
    }

    printf("\nPromedio: %.2f\n", sumaNotas / n);
    printf("Reprobados: %d\n", reprobado);
    printf("Aceptable: %d\n", aceptable);
    printf("Bien: %d\n", bien);
    printf("Satisfactorio: %d\n", satisfactorio);
    printf("Excelente: %d\n", excelente);

    return 0;
}
