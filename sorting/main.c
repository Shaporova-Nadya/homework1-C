#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> 
#include "stack.h"
#include "SortingStation.h"

int main(void) {
    char strin[] = "(1 + 1) * 2";
    char* strout = InfixToPostfix(strin);
    printf("Инфиксное выражение: %s\n", strin);
    printf("Постфиксное выражение: %s\n", strout);
    free(strout); 
    return 0;
}
