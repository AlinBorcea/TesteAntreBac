#include <stdio.h>

int main() {
    int a[4][5], n = 4, m = 5;
    int i, j;

    for (i = n - 1; i >= 0;  i--)
        for (j = 0; j < m; j++)
            a[i][j] = i == n - 1 ? j + 1 : a[i + 1][j] + 5;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}