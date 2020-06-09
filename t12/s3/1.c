#include <stdio.h>

int pDoi(int n) {
    if (n == 1) // 2^0 = 1
        return 1;

    int i = n % 2 != 0 ? n - 1 : n, x, d = 2;
    while (i > 1) {
        x = i;
        while (x % d == 0)
            x /= d;

        if (x == 1)
            return i;

        i -= 2;
    }
}

int main() {
    printf("%d\n", pDoi(20));
    return 0;
}