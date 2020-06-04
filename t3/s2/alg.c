#include <stdio.h>

int main() {
    int n, c1, c2, s;
    scanf("%d", &n);
    c1 = n % 10;
    n /= 10;
    c2 = n % 10;

    if (c1 == c2) s = 0;
    else if (c1 > c2) s = 1;
    else s = -1;

    do {
        c1 = n % 10;
        n /= 10;
        c2 = n % 10;
    } while ((c1 - c2) * s > 0);

    printf("%d %d\n", s, n);
    return 0;
}