#include <stdio.h>

int main() {
    char cuvinte[20][20];
    int n, i, j;

    printf("n = "); scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", cuvinte[i]);

    for (i = 0; i < n - 1; i++) {
        j = 0;
        while (cuvinte[i][j] && cuvinte[n - 1][j] && cuvinte[i][j] == cuvinte[n - 1][j])
            j++;
        
        if (!cuvinte[n - 1][j])
            printf("%s ", cuvinte[i]);
    }

    return 0;
}