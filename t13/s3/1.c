#include <stdio.h>

void putere(int n, int *d, int *p) {
    int dMin = -1, pMin = -1;

    *d = 2;
    while (n != 1) {
        *p = 0;
        while (n % *d == 0) {
            n /= *d;
            *p++;
        }

        if ((dMin == -1 && pMin == -1) || *p < pMin) {
            dMin = *d;
            pMin = *p;
        
        } else if (dMin != -1 && *p == pMin && *d < dMin)
            dMin = *d;

        *d++;
    }

    *d = dMin;
    *p = pMin;
    printf("%d %d\n", *d, *p);
}

int main() {
    int d, p;
    putere(10780, &d, &p);
    printf("%d %d\n", d, p);
    return 0;
}