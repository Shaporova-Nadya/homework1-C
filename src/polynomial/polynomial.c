#include <stdio.h>
#include "polynomial.h"

int formule(int x)
{
    int xSquared = x * x; 
    
    int tempExpression = xSquared + x + 1; 

    int result = xSquared * tempExpression; 
    
    result = result + x + 1;

    return result;
}

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


