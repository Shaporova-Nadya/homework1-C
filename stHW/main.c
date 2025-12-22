#include "SortStation.h"
#include "stackHW/Stack.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char strin[] = "(1 + 1) * 2";
    char* strout = InfixToPostfix(strin);
    printf("Инфиксное выражение: %s\n", strin);
    if (strout == NULL) {
        printf("Ошибка\n");
    } else {
        printf("Постфиксное выражение: %s\n", strout);
        free(strout);
    }
    return 0;
}