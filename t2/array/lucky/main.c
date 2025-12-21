#include <stdio.h>
#include "lucky_tickets.h"

int main(void)
{
    int count = lucky();
    
    printf("Общее количество счастливых билетов: %d\n", count);
    return 0;
}