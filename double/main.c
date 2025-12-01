#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "Double.h"

void testPrintDouble()
{
    return printDouble(-2.5);
}

void testPrintDouble2()
{
    return printDouble(12312.323)
}

int main() {
    double num;
    printf("Enter a number: ");
    
    if (scanf("%lf", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printDouble(num);

    return 0;
}