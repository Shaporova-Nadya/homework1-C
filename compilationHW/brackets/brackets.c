#include <stdio.h>
#include "brackets.h"

int isBalanced(const char* str) 
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            count++;
        } else if (str[i] == ')') {
            count--;
        }
        if (count < 0) {
            return 0; 
        }
    }
    return (count == 0); 
}


