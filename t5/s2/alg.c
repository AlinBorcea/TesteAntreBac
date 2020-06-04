#include <stdio.h>

int main() {
    int n, x, y, d;
    scanf("%d", &n);
    x = 1;
    y = n;
    d = 2;

    while (x < y) {
        if (n % d == 0) {
            x = d;
            y = n / d;
        }
        d++;
    }

    if (x == y)
        printf("D%d", x);
    else
        printf("N");

    return 0;
}