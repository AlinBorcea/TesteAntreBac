#include <stdio.h>

int main() {
    int a[4][5], i, j;

    for (i = 0; i < 4; i++) 
        for (j = 0; j < 5; j++)
            a[i][j] = 5 - j + 5 * i;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}