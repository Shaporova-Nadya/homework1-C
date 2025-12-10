#include <stdio.h>

int
main(void)
{
    int count = 0;
    int sums[28] = { 0 };

    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                sums[i + j + k]++;
            }
        }
    }

    for (int i = 0; i <= 27; i++) {
        count += sums[i] * sums[i];
    }

    printf("Общее количество счастливых билетов: %d\n", count);

    return 0;
}
