#include <stdio.h>

void produs(int n, int *p) {
    int f[10] = {0};
    while (n) {
        f[n % 10]++;
        n /= 10;
    }

    *p = 1;
    for (int i = 0; i < 10; i += 2)
        if (f[i])
            *p *= i;

    if (*p == 1)
        *p = -1;
}

int main() {
    int n, p;
    scanf("%d", &n);
    produs(n, &p);
    printf("%d\n", p);
    return 0;
}