#include "quotient.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1 = 10;
    int num2 = 3;
    int result = GetQuotient(num1, num2);

    printf("Неполное частное от деления %d на %d равно: %d\n", num1, num2,
        result);

    return 0;
}