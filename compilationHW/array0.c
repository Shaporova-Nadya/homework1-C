#include <stdio.h>
int main(void) 
{
  int count = 0;
  int a[] = {1, 0, 33, 10, 5, 0, 0, 9};
  int size = sizeof(a) / sizeof(a[0]);
  for (int i = 0; i < size; i++) 
  {
    if (a[i] == 0) 
    {
      count++;
    }
  }
  printf("Количество нулевых элементов равно %d\n", count);
  return 0;
}
