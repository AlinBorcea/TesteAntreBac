#include <stdio.h>

int main() {
    int n, k, a[401][21];
    int i, j, h, g;

    scanf("%d", &n);
    scanf("%d", &k);

    for (i = 1; i <= n; i++) {
        j = i;
        for (h = 1; h <= n * k; j++)
            for (g = 1; g <= k; g++) {
                a[h][i] = j;
                h++;
            }
    }

    for (i = 1; i <= n * k; i++) {
        for (j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}