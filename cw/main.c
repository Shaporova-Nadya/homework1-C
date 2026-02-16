#include <stdio.h>
#include <stdbool.h>
#include "compare.h"

int TestCompareZero(void)
{
    bool num1 = {};
    int len1 = 0;
    bool num2 = {};
    int len2 = 0;

    return compare(num1, len1, num2, len2);
}

int TestBigCompare(void)
{
    bool numX = {true, true, false, false, true, false, false, true, true, false};
    int lenX = 10;
    bool numY = {true, false, false, false, true, true, false, true, false, false, true};
    int lenY = 11;

    return compare(numX, lenX, numY, lenY);
}

void testBinary()
{
    bool arr = {true, true, false, true, false};
    int len = 5;

    return binary(arr, len);
}

int main(void)
{
    if(!TestCompareZero() || !TestBigCompare()){
        printf("Tests failed\n");
        return 1;
    }
    if(!testBinary()) {
        printf("Test failed\n");
        return 1;
    }

    bool numA[] = {true, false, true};
    int lenA = 3;
    bool numB = {false, true}; 
    int lenB = 2;
    int result = compare(numA, lenA, numB, lenB);
    binary(numA, lenA);
    binary(numB, lenB);
    printf("Результат сравнения: %d\n", result);

    return 0;
}