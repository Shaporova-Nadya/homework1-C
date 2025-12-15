#include "polynomial.h"
#include <stdio.h>

int main(void)
{
    int num;

    printf("Введите число x:");
    if (scanf("%d", &num) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    int result = formule(num);

    printf("Значение формулы равно: %d\n", result);
    return 0;
}