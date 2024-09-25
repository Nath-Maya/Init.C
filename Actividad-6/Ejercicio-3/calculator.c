#include <stdio.h>

// Haga una calculadora simple, con selección de símbolo y entrada de los dos
// números, de tal forma que se ejecute la operación.

int main()
{

    int number1, number2;
    char operator;

    printf("CALCULADORA\n\n");

    printf("Ingrese un numero: \n");
    scanf("%d", &number1);

    printf("+ si es suma \n");
    printf("- si es resta \n");
    printf("x si es multiplicacion \n");
    printf("/ si es division \n\n");
    printf("Indique la operación: \n");
    scanf(" %c", &operator);

    printf("Ingrese el otro numero: \n");
    scanf("%d", &number2);

    if (operator == '+')
    {
        int suma = number1 + number2;
        printf("Total suma: %d\n", suma);
    }
    else if (operator == '-')
    {
        int resta = number1 - number2;
        printf("Total resta: %d\n", resta);
    }
    else if (operator == 'x')
    {
        int multiplicacion = number1 * number2;
        printf("Total multiplicacion: %d\n", multiplicacion);
    }
    else if (operator == '/')
    {
        float division = (float)number1 / number2; 
        printf("Total division: %.2f\n", division); 
    }

    return 0;
}
