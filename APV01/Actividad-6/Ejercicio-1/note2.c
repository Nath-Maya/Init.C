# include <stdio.h>

//De acuerdo a una note escrita por el usuario (1…5) , determinar si el curso
//fue reprobado (R >=0.0, <3.0), aprobado Aceptable (A >=3.0, <3.5), Bien (B,
//>=3.5, <4.0) , Satisfactoriamente (S, >=4.0, <4.5) o Excelente (E, >=4.5<=5.0)

int main() {

    float note = 0;

    printf("Ingrese su nota para verificar su estado en el curso: \n");
    scanf("%f", &note);

    if (note >= 0.0 && note <= 5.0) {
        // Determinar la clasificación de la note
        if (note < 3.0) {
            printf("Curso fue reprobado: R.\n");
        } else if (note >= 3.0 && note < 3.5) {
            printf("La nota es Aceptable: A.\n");
        } else if (note >= 3.5 && note < 4.0) {
            printf("La nota es Bie: B.\n");
        } else if (note >= 4.0 && note < 4.5) {
            printf("La nota es Satisfactoriamente: S.\n");
        } else if (note >= 4.5 && note <= 5.0) {
            printf("La nota es Excelente: E.\n");
        }
    } else {
        printf("Ingrese un valor entre 1 y 5.\n");
    }

}