#include <stdio.h>

int main() {
    int v[101] = {0};
    int n, i, j;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &v[i]);

    for (i = 1; i <= n; i++) {
        if (v[i] < 0) {
            j = i;
            while (j < n) {
                v[j] = v[j + 1];
                j++;
            }
            n--;
            i--;
        }
    }

    for (i = 1; i <= n; i++)
        printf("%d ", v[i]);

    return 0;
}