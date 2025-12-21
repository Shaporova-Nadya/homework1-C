#include "array.h"
#include <stdio.h>

void reverseArr(int arr, int start, int end)
{
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void swap(int arr, int m, int n)
{
    int length = m + n;

    if (m == 0 || n == 0) {
        return;
    }

    reverseArr(arr, 0, m - 1);

    reverseArr(arr, m, length - 1);

    reverseArr(arr, 0, length - 1);
}
