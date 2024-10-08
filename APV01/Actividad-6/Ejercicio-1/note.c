# include <stdio.h>

//De acuerdo a una nota escrita por el usuario (1…5) , 
//determinar si el curso fue aprobado, la nota de aprobación es mayor o igual a 3.

int main() {

    float note = 0;

    printf("Ingrese su nota para verificar si aprobo: \n");
    scanf("%f", &note);

    if(note >= 3) {
        printf("Aprobaste con una nota de %.2f \n", note);
    } else {
        printf("No aprobaste \n");
    }

    return 0
}