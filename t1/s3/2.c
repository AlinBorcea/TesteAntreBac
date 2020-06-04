#include <stdio.h>

int main() {
    int v[401] = {0}, n, k, c, i, j;
    printf("n = "); scanf("%d", &n);
    printf("k = "); scanf("%d", &k);

    c = k;
    for (i = 1; i <= n * k; i++) {
        j = 1;
        while (j <= k) {
            v[i] = c;
            i++;
            j++;
        }
        i--;
        c++;
    }

    for (i = 1; i <= n * k; i++)
        printf("%d ", v[i]);
    return 0;
}