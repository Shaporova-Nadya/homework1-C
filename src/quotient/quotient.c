#include <stdio.h>
#include <stdlib.h>

int GetQuotient(int a, int b)
{
    int sign = 1;

    if (a * b < 0) {
        sign = -1;
    }

    int absA = abs(a);
    int absB = abs(b);

    int quotient = 0;

    while (absA >= absB) {
        absA = absA - absB;
        quotient++;
    }

    return quotient * sign;
}


