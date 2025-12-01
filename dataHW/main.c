#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Lib.h"

int main(void)
{
    int num1, num2
    printf("Введите первое число:");
    scanf("%d", num1);
    printf("Введите второе число:");
    scanf("%d", num2);


    printf("\n Число1 (%d)=", num1);
    binary(num1);
    printf("\n Число2 (%d)=", num2);
    binary(num2);
    printf("\n");

    BinarySum(num1, num2);

    char FinalSum = (char)((unsigned char)num1 + (unsigned char)num2);
    printf("Сумма в десятичном виде: %d\n", FinalSum);

    return 0;
}