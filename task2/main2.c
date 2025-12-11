#include "task2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int* numbers = NULL;
    int count = 0;
    int capacity = 10; 
    int num;

    numbers = (int*)malloc(capacity * sizeof(int));
    if (numbers == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    printf("Введите числа:\n");

    while (scanf("%d", &num) == 1 && num != 0) {
        if (count == capacity) {
            capacity *= 2;
            int* temp = (int*)realloc(numbers, capacity * sizeof(int));
            if (temp == NULL) {
                printf("Ошибка перевыделения памяти!\n");
                free(numbers);
                return 1;
            }
            numbers = temp;
        }
        numbers[count++] = num;
    }

    if (count == 0) {
        printf("Числа не были введены.\n");
        free(numbers);
        return 0;
    }

    qsort(numbers, count, sizeof(int), compareInt);

    printf("\nРезультат:\n");

    int currentNum;
    int currentCount;

    for (int i = 0; i < count; i++) {
        currentNum = numbers[i];
        currentCount = 1;

        while (i + 1 < count && numbers[i + 1] == currentNum) {
            currentCount++;
            i++;
        }

        printf("%d: %d раз(а)\n", currentNum, currentCount);
    }
    free(numbers);

    return 0;
}

