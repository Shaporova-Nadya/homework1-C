#include <stdio.h>
#include "array0.h"

int countZeroElements(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    return count;
}


