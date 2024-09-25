#include <stdio.h>
#include <ctype.h>

// De acuerdo a una letra escrita por el usuario, determinar si la letra es un vocal, consonante, símbolo o número.

int main() {
    
    char letter;

    printf("Ingresar un carácter cualquiera: ");
    scanf(" %c", &letter);

    if (isalpha(letter)) { 
        letter = tolower(letter); 
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
            printf("La letra '%c' es una vocal.\n", letter);
        } else {
            printf("La letra '%c' es una consonante.\n", letter);
        }
    } else if (isdigit(letter)) { 
        printf("El carácter '%c' es un número.\n", letter);
    } else { // 
        printf("El carácter '%c' es un símbolo.\n", letter);
    }

    return 0;
}
