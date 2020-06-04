#include <stdio.h>

int main() {
    int n, d, p, maxd, maxp;
    scanf("%d", &n);

    maxd = 0;
    maxp = 0;
    d = 2;
    while (n != 1) {
        p = 0;
        while (n % d == 0) {
            n /= d;
            p++;
        }

        if (p > maxp) {
            maxp = p;
            maxd = d;
        
        } else if (p == maxp && d > maxd) {
            maxd = d;
        }

        d++;
    }

    printf("%d %d\n", maxd, maxp);
    return 0;
}