#include <stdio.h>

int main()
{

   int x = 4, y = 2;
   char operator= '-';

   switch (operator)
   {
   case '+':
      x += y;
   case '-':
      x -= y;
   case '*':
      x *= y;
   case '/':
      x /= y;
   default:
      break;
   }

   printf("RESULTADO: %d\n", x);
}