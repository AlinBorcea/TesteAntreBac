#include <stdio.h>

int main() {
    char a[6][6];
    int n = 5;
    int i, j;

    for (i = 1; i <= n; i++) 
        for (j = 1; j <= n; j++)
            if ((i > j && i + j < n) || (i < j && i + j > n))
                a[i][j] = '*';
            else if (j < n / 2)
                a[i][j] = '(';
            else
                a[i][j] = ')';

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            printf("%c", a[i][j]);
        printf("\n");
    }

}