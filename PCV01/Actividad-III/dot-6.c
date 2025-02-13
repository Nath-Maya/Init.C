#include <stdio.h>

int main()
{

   int x, y;

   {
      x = 3,
      y = 5 + x;
   }

   printf("y = %d\n", y);
   return 0;
}