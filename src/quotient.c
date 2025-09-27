#include <stdlib.h>
#include <stdio.h>

int GetQuotient(int a, int b) 
{
  int sign = 1;
  if (a * b < 0) 
  {
  sign = -1;
  }

  int absA = abs(a);
  int absB = abs(b);

  int quotient = 0;

  while (absA >= absB) 
  {
    absA = absA - absB;
    quotient++;
  }

  return quotient * sign;
}

int main() 
{
  int num1 = 10;
  int num2 = 3;
  int result = GetQuotient(num1, num2);
  printf("Неполное частное от деления %d на %d равно: %d\n", num1, num2, result);

  return 0;
}

