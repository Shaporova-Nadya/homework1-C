#include "array.h"
#include <stdio.h>

int main(void)
{
    int array = { 1, 2, 3, 4, 5, 6, 7 };
    int m = 4;
    int n = 3;
    int total_size = m + n;

    printf("Исходный массив: ");
    for (int i = 0; i < total_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    swap_sections(array, m, n);

    printf("Массив после перестановки: ");
    for (int i = 0; i < total_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}