#include <stdio.h>

int main()
{
   // primer bloque
   for (int i = 0, j = 1; i < 8; i++, i++)
   {
      printf("%d + %d = %d\n", i, j, i + j);
   }

   printf("\n");

   // segundo bloque
   for (int i = 0, j = 1; i < 8; i++, i++)
   {
      printf("%d + %d = %d\n", i, j, i + j);
   }

   return 0;
}
