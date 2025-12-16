#include <stdio.h>
#include <stdbool.h>
#include <math.h> 
#include "Double.h"

typedef union Number {
    double value;
    unsigned char binaryForm[8]; 
} Number;

bool getBit(unsigned char data[8], int bitIndex) {
    int byte = bitIndex / 8;
    int bitInByte = bitIndex % 8;
    
    unsigned char mask = bitInByte >> 1;
    
    return (data[byte] & mask) != 0;
}

void printDouble(double value) {
    if (value == 0.0) {
        printf("Result: +0.0*2^0\n");
        return;
    }

    Number converter;
    converter.value = value;

    bool signBit = get_bit(converter.binaryForm, 63);
    char signChar = signBit ? '-' : '+';

    int exponentBits = 0;
    for (int i = 0; i < 11; i++) {
        if (get_bit(converter.binaryForm, 52 + i)) {
            exponentBits |= (1 << i);
        }
    }

    double mantissa = 0.0;
    double pow = 2.0; 

    for (int i = 0; i < 52; i++) {
        if (get_bit(converter.binaryForm, 51 - i)) {
            mantissa += (1.0 / pow);
        }
        pow *= 2.0;
    }

    int p = exponentBits - 1023;
    double m = 1.0 + mantissa;


    printf("Result: %c%.15g*2^%d\n", signChar, m, p);
}
