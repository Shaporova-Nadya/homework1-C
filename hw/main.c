#include "count.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int m;
    printf("Введите количество воинов (n): ");
    scanf("%d", &n);
    printf("Введите шаг (m), с которым убивают: ");
    scanf("%d", &m);

    int result = count(n, m);

    if (result != -1) {
        printf("Последний оставшийся воин (k): %d\n", result);
    }

    return 0;
}
