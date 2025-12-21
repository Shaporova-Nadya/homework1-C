#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Lib.h"

void binary(int x) {
    unsigned char n = (unsigned char)x;
    unsigned char bit = 0x80; 

    for (int j = 0; j < 8; j++) {
        printf("%s", (n & bit) ? "1" : "0");
        bit = bit >> 1;
    }
}

void BinarySum(int a, int b) {
    unsigned char numA = (unsigned char)a;
    unsigned char numB = (unsigned char)b;
    unsigned char sum = numA + numB;

    binary(numA); printf(" (%d)\n", numA);
    printf("+\n");
    binary(numB); printf(" (%d)\n", numB);
    printf("========\n");
    binary(sum);  printf(" (%d)\n", sum);
}


