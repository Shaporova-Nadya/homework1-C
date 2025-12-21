#include <stdio.h>
#include <string.h>
#include "substring.h"

int count(const char* text, const char* substring)
{
    int count = 0;
    char* pos = (char*)text;

    while ((pos = strstr(pos, substring)) != NULL) {
        count++;
        pos += strlen(substring);
    }
    return count;
}


