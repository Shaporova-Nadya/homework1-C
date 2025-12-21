#include <stdio.h>
#include "array0.h"

int main(void)
{
    int arr[] = { 1, 0, 33, 10, 5, 0, 0, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int zeroEl = countZeroElements(arr, size);
    printf("Количество нулевых элементов равно %d\n", zeroEl);
    return 0;
}