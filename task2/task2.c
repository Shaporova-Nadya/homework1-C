#include "task2.h"
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int compareInt(const void* a, const void* b) {
    int int_a = *((int*)a);
    int int_b = *((int*)b);
    return int_a - int_b;
}


