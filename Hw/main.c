#include "sorting.h"
#include <stdio.h>

int main(void)
{
    int numbers[100];
    int count = 0;
    int val = 0;

    while (count < 100) {
        if (scanf("%d", &val) == 1) {
            numbers[count++] = val;
        }
        char ch = getchar();
        if (ch == '\n' || ch == EOF) {
            break;
        }
    }

    if (count == 0) {
        return 0;
    }

    int movedElements = asmSort(numbers, count);

    for (int i = 0; i < count; i++) {
        printf("%d%c", numbers[i], (i == count - 1) ? '\n' : ' ');
    }

    return movedElements;
}
