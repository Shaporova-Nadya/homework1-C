#include <stdio.h>

int
formule(int x)
{
    int x1;
    x1 = ((x + 1) * x + 1) * x + 1;
    return x1;
}

int
main(void)
{
    int num;

    printf("Введите число x:");
    scanf("%d", &num);

    int result = formule(num);

    printf("Значение формулы равно: %d", result);
    return 0;
}
