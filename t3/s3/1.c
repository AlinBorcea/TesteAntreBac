#include <stdio.h>

int main() {
    int n, m, x, d, p, i = 1;
    scanf("%d", &n);
    scanf("%d", &m);
    while (i <= 2) {
        x = i == 1 ? n : m;
        d = 2;
        p = 0;
        while (x != 1) {
            while (x % d == 0) {
                x /= d;
                p++;
            }
            d++;
        }
        i++;
        printf("%d\n", p);
    }

    return 0;
}