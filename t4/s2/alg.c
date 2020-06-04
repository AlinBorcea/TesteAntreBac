#include <stdio.h>

int main() {
    int n, c1, c2;
    scanf("%d", &n);

    do {
        c1 = n % 10;
        n /= 10;
        c2 = n % 10;

        if (c1 > c2) {
            c2 = c1;
            c1 = n % 10;
        }

        while (c1 < c2) {
            printf("%d", c1);
            c2 /= 2;
        }

    } while (n > 9);

    return 0;
}