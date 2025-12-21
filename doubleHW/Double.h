#pragma once

typedef union Number {
    double value;
    unsigned char binaryForm[8]; 
} Number;

bool getBit(unsigned char data[8], int bitIndex);

void printDouble(double value);