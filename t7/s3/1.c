#include <stdio.h>

int putere(int n, int p) {
    if ((p % 2 == 0 && p != 2) || p < 2)
        return -1;
    
    int d;
    for (d = 3; d * d <= n; d += 2) 
        if (p % d == 0)
            return -1;

    int e = 0;
    d = 2;
    while (n != 1) {
        while (n % d == 0) {
            if (d == p)
                e++;
            n /= d;
        }
        d++;
    }
    
    return e ? e : -1;
}

int main() {
    printf("%d\n", putere(80, 2));
    return 0;
}