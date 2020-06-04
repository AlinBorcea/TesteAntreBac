#include <stdio.h>
#include <math.h>

int main() {
    int n, p = 1, m = 0, k = 0, x, i, c;
    scanf("%d", &n);
    
    while (n) {
        scanf("%d", &x);
        x /= pow(10, k);
        
        c = x ? x % 10 : n % 10;
        m = c * p + m;
        n /= 10;
        p *= 10;
        k++;
    }

    printf("%d\n", m);
    return 0;
}