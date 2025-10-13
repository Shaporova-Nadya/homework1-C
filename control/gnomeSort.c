#include <stdio.h>


void swap(int *x, int *y) 
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void gnomeSort(int arr[], int n) 
{
    int j = 0;
    while (j < n) {
        if (j == 0) {
            j++;
        }
        if (arr[j] >= arr[j - 1]) {
            j++;
        } else {
            swap(&arr[j], &arr[j - 1]);
            j--;
        }
    }
}

void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) 
{
    int arr[] = {34, 2, 10, -9, 3, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Исходный массив: \n");
    printArray(arr, n);
    gnomeSort(arr, n);
    printf("Отсортированный массив: \n");
    printArray(arr, n);
    return 0;
}
