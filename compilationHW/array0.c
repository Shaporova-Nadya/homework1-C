#include <stdio.h>

int isNulElem(int arr[], int size)
{
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == 0) {
      count++;
    }
}
return count;
}

int main(void) 
{
  int arr[] = {1, 0, 33, 10, 5, 0, 0, 9};
  int size = sizeof(arr) / sizeof(arr[0]);
  int zeroEl = isNulElem(arr, size);
  printf("Количество нулевых элементов равно %d\n", zeroEl);
  return 0;
}
