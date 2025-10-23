#include "stack.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "StackBrackets.h"

int main(void)
 {
    char str[] = "({[]}";
    if (isBalanced(str)){
        printf("Сбалансированно\n");
    } else {
        printf("Не сбалансированно\n");
    }
    return 0;
 }
