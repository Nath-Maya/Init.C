#include <stdio.h>
#include <string.h>
#include <ctype.h>

//? Declaracion de funciones

void calculateAverage();
void invertString();
void isPrime();
void countVowelsConsonants();
void factorial();
void exchangeValues();

int main()
{

   //** Definir la variable que contendra la funcion
   int option;

   //**  Imprimo las opciones para que el usuario seleccione
   printf("TOOLS EN C \n\n");

   printf("1. Calcular el promedio de un arreglo de enteros\n");
   printf("2. Invertir una cadena de caracteres\n");
   printf("3. Verificar si un número es primo\n");
   printf("4. Contar vocales y consonantes en una cadena\n");
   printf("5. Calcular el factorial de un número\n");
   printf("6. Intercambiar los valores de dos enteros\n\n");
   printf("Seleccione la utilidad o herramienta que necesita usar: \n");
   scanf("%d", &option);

   //* Estructura de Control de la opcion seleccionada
   switch (option)
   {
   case 1:
      printf("Opcion seleccionada: Calcular el promedio de un arreglo de enteros\n");
      calculateAverage();

      break;
   case 2:
      printf("Opcion seleccionada: Invertir una cadena de caracteres\n");
      invertString();
      break;
   case 3:
      printf("Opcion seleccionada: Verificar si un número es primo\n");
      isPrime();
      break;
   case 4:
      printf("Opcion seleccionada: Contar vocales y consonantes en una cadena\n");
      countVowelsConsonants();
      break;
   case 5:
      printf("Opcion seleccionada: Calcular el factorial de un número\n");
      factorial();
      break;
   case 6:
      printf("Opcion seleccionada: Intercambiar los valores de dos enteros\n");
      break;
   default:
      printf("Opcion Incorrecta\n");
   }

   return 0;
}

//? Definicion de las funciones
// Se establece el procedimiento que hara cada una de las funciones

void calculateAverage()
{
   int suma = 0, sizeArray, i;
   printf("Cuantos numeros va a ingresar ?: ");
   scanf("%d", &sizeArray);
   int arr[sizeArray];

   printf("Ingresar los numeros: \n");
   for (i = 0; i < sizeArray; i++)
   {
      scanf("%d", &arr[i]);
      suma += arr[i];
   }

   float promedio = (float)suma / sizeArray;
   printf("El promedio es: %.1f\n", promedio);
}

void invertString()
{
   char stringCharacters[50];

   printf("Ingrese una palabra o cadena de caracteres: ");
   scanf("%s", stringCharacters);

   int len = strlen(stringCharacters);
   printf("Texto o Cadena invertida: ");
   for (int i = len - 1; i >= 0; i--)
   {
      printf("%c", stringCharacters[i]);
   }
   printf("\n");
}

void isPrime()
{
   int num = 0, i;
   int isPrime = 1;

   printf("Si el numero es primo obtendra un resultado 1, de lo contrario obtendra un 0. \n");
   printf("Ingrese un numero: \n");
   scanf("%d", &num);

   if (num <= 1)
   {
      isPrime = 0;
   }
   else
   {
      for (i = 2; i * i <= num; i++)
      {
         if (num % i == 0)
         {
            isPrime = 0;
            break;
         }
      }
   }

   printf("%d\n", isPrime);
}

void countVowelsConsonants()
{

   char chainCharacteres[100];
   int vowels = 0, consonant = 0;

   printf("Ingrese una cadena o texto: ");
   scanf("%s", chainCharacteres);

   for (int i = 0; chainCharacteres[i] != '\0'; i++)
   {
      char c = chainCharacteres[i];
      if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
      {
         c = tolower(c);
         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
         {
            vowels++;
         }
         else
         {
            consonant++;
         }
      }
   }

   printf("Cantidado de vocales: %d\n", vowels);
   printf("Cantidad de consonantes: %d\n", consonant);
}

void factorial()
{

   int number;
   unsigned long long fact = 1; // Inicialización para almacenar el resultado de un factorial

   printf("Ingrese un numero positivo: ");
   scanf("%d", &number);

   if (number < 0)
   {
      printf("El factorial no esta definido para numeros negativos.\n");
   }
   else
   {
      for (int i = 1; i <= number; i++)
      {
         fact *= i;
      }
      printf("El factorial de %d es: %llu\n", number, fact);
   }
}

void exchangeValues()
{
   int a, b;
   printf("Ingrese el primer número: ");
   scanf("%d", &a);
   printf("Ingrese el segundo número: ");
   scanf("%d", &b);

   printf("Valores antes del intercambio: a = %d, b = %d\n", a, b);
   a = a + b;
   b = a - b;
   a = a - b;
   printf("Valores después del intercambio: a = %d, b = %d\n", a, b);
}
