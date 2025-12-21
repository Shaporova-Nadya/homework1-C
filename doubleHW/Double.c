#include "Double.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

typedef union Number {
    double value;
    unsigned char binaryForm[8];
} Number;

bool getBit(unsigned char data[8], int bitIndex)
{
    int byte = bitIndex / 8;
    int bitInByte = bitIndex % 8;
    unsigned char mask = 1 << bitInByte;
    return (data[byte] & mask) != 0;
}

void printDouble(double value)
{
    if (value == 0.0) {
        printf("Result: +0.0*2^0\n");
        return;
    }

    Number converter;
    converter.value = value;

    bool signBit = getBit(converter.binaryForm, 63);
    char signChar = signBit ? '-' : '+';

    int exponentBits = 0;
    for (int i = 0; i < 11; i++) {
        if (getBit(converter.binaryForm, 52 + i)) {
            exponentBits |= (1 << i);
        }
    }

    double mantissa = 0.0;
    double divisor = 2.0;
    for (int i = 0; i < 52; i++) {
        if (getBit(converter.binaryForm, 51 - i)) {
            mantissa += (1.0 / divisor);
        }
        divisor *= 2.0;
    }

    int p = exponentBits - 1023;
    double m = 1.0 + mantissa;

    if (exponentBits == 0) {
        p = -1022;
        m = mantissa;
    } else if (exponentBits == 2047) {
        printf("Result: %cSpecial Value\n", signChar);
        return;
    }

    printf("Result: %c%.15g*2^%d\n", signChar, m, p);
}
