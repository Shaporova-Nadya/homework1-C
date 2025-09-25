#include <stdio.h>


int get_quotient(int a, int b) 
{
    if (b == 0) 
    {
        
        printf("Ошибка: деление на ноль.\n");
        return 1;
    }

    int sign = 1;
    if ((a < 0 && b > 0) || (a > 0 && b < 0)) 
    {
        sign = -1;
    }

    
    unsigned int abs_a = (a < 0) ? -a : a;
    unsigned int abs_b = (b < 0) ? -b : b;

    int quotient = 0;
    
    while (abs_a >= abs_b) 
    {
        abs_a = abs_a - abs_b;
        quotient++;
    }

    return quotient * sign;
}

int main() 
{
    int num1, num2;

    printf("Введите делимое (a): ");
    scanf("%d", &num1);
    printf("Введите делитель (b): ");
    scanf("%d", &num2);

    int result = get_quotient(num1, num2);
    printf("Неполное частное от деления %d на %d равно: %d\n", num1, num2, result);

    return 0;
}
