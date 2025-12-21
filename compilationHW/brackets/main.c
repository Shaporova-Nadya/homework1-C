#include <stdio.h>
#include "brackets.h"

int main(void) 
{
    char str[] = "((a + b) * (c + d)"; 
    
    if (isBalanced(str)) {
        printf("Скобки сбалансированны\n");
    } else {
        printf("Скобки не сбалансированны\n");
    }
    
    return 0;
}