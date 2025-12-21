#include <stdio.h>
#include <string.h>
#include "substring.h"

int main(void)
{
    const char* text = "bbbb";
    const char* substring = "bb";
    int count = count(text, substring);
    printf("Количество вхождений \"%s\" в строку составляет %d.\n", substring, count);

    return 0;
}