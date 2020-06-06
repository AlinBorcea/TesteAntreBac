#include <stdio.h>

int main() {
    int a[21][21], n, k, i, j;
    int m;

    printf("n = "); scanf("%d", &n);
    printf("k = "); scanf("%d", &k);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", a[i][j]);
            if (i == k && j == i)
                m = j - 1;
        }
    }

    j = a[k][1];
    for (i = 1; i < m; i++)
        a[k][i] = a[k][i + 1];
    
    a[k][m] = j;

    for (i = 1; i <= n; i++) { 
        for (j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}