#include <stdio.h>

int suma(int n) {
    int s = 0;
    int d = 2;

    while (n != 1) {
        if (n % d == 0) {
            s += d;
            while (n % d == 0)
                n /= d;
        }
        d++;
    }
    return s;
}

int main() {
    printf("%d\n", suma(12));
    return 0;
}