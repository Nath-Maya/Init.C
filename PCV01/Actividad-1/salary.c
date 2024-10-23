// Elaborar un algoritmo que permita calcular el nuevo salario de un obrero si obtuvo un incremento del 25 % sobre su salario anterior.

#include <stdio.h>

int main()
{

   float previousSalary, percentage = 1.25, salaryIncrease;

   printf("CALCULAR AUMENTO DE SUELDO\n");
   printf("Ingrese su salario: \n");
   scanf("%f", &previousSalary);

   salaryIncrease = previousSalary * percentage;

   printf("El porcentaje es: %.2f\n", salaryIncrease);

   return 0;
}