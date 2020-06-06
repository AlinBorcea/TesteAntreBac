#include <stdio.h>

int suma(int n, int *s) {
    int f[10] = {0};
    while (n) {
        f[n % 10]++;
        n /= 10;
    }

    *s = 0;
    for (int i = 1; i < 10; i += 2)
        if (f[i])
            *s += i;
}

int main() {
    int n = 4713835, s;
    suma(n, &s);
    printf("%d\n", s);
    return 0;
}