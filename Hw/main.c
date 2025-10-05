#include "sorting.h"
#include <stdio.h>
#include <stdlib.h>

int main() 
{
  const int MaxNumber = 100;
  int numbers[MaxNumber];
  int count = 0;
  int num;
  while (count < MaxNumber && scanf("%d", &num) == 1) 
  {
    numbers[count++] = num;
  }
  qsort(numbers, count, sizeof(int), CompareFunc);

  for (int i = 0; i < count; i++) 
  {
    printf("%d%s", numbers[i], (i == count - 1) ? "" : " ");
    
  }
  printf("\n");
    return 0;
  }
