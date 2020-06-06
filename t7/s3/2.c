#include <stdio.h>

int main() {
    int a[21][21];
    int n, m;
    int i, j;

    scanf("%d", &n);
    scanf("%d", &m);

    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            if (a[i][1] == a[j][n])
                printf("%d ", a[i][1]);

    return 0;
}