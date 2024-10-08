#include <stdio.h>
#include <ctype.h>

//De acuerdo a una letra escrita por el usuario, determinar si el es un vocal.

int main() {
    
    char letter;

    printf("Ingresar una letra cualquiera: ");
    scanf(" %c", &letter);

    letter = tolower(letter); //Convierto una letra mayuscula en minuscula

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        printf("La letra %c que ingreso es una vocal \n", letter);
    } else {
        printf("La letra ingresada no es una vocal \n");
    }

    return 0;
}