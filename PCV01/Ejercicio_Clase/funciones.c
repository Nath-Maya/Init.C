

#include <stdio.h>

// Definicion de la funcion
int sum(int a, int b)
{
   return a + b;
}

void printMessage() {
printf("Procedimiento\n");
}

int main()
{
   int num1 = 5;
   int num2 = 32;
   // definir la variable que almacenara el resultado
   int suma = sum(num1, num2);

   // Imprimir resultado
   printf("Resultado %d\n", suma);

   return 0;
       
}
