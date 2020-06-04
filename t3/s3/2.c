#include <stdio.h>

int main() {
    int v[21] = {0};
    int n, k, c;
    scanf("%d", &n);
    scanf("%d", &k);

    c = 1;
    for (int i = k - 1; i; i--)
        v[i] = c++;

    c = 1;
    for (int i = k + 1; i <= n; i++)
        v[i] = c++;

    
    for (int i = 1; i <= n; i++)
        printf("%d ", v[i]);

    return 0;
}