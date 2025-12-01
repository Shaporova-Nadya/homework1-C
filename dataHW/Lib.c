#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Lib.h"

void binary(int x)
{
    unsigned char n = (unsigned char)x;
    int bit = 0b10000000;
for (int j = 0; j < 8; j++){
    printf("%c"(x & bit)?"1":"0", "\n");
    bit = bit >> 1;
}
}

void BinarySum(int a, int b)
{
    unsigned char numA = (unsigned char)a;
    unsigned char numB = (unsigned char)b;
    unsigned char sum = numA + numB;

    binary(a);
    printf("%d\n", a);
    printf("+");
    binary(b);
    printf("%d\n", b);
    printf("=");
    printf("\n");
    binary(sum);
    printf("%d\n", sum);
}

