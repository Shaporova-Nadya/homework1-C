#include "Lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int num1, num2;

    printf("Введите первое число: ");
    if (scanf("%d", &num1) != 1)
        return 1;

    printf("Введите второе число: ");
    if (scanf("%d", &num2) != 1)
        return 1;

    printf("\n--- Результат сложения ---\n");
    BinarySum(num1, num2);

    char FinalSum = (char)((unsigned char)num1 + (unsigned char)num2);
    printf("\nСумма в десятичном виде: %d\n", FinalSum);

    return 0;
}