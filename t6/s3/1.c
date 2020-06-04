#include <stdio.h>

void prodprim(int n, int *p) {
    int d = 2;
    *p = 1;
    while (n != 1) {
        while (n % d == 0)
            n /= d;
        
        (*p) *= d;
        d++;
    }
}

int main() {
    int n, p;
    scanf("%d", &n);
    prodprim(n, &p);
    printf("%d\n", p);
    return 0;
}