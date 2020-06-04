#include <stdio.h>

int main() {
    int n, m = 0, c;
    scanf("%d", &n);
    do {
        c = n % 10;
        n /= 10;
        if (c == 0)
            c = 2;
        
        else if (c % 2 == 0)
            c = 0;

        m = m * 10 + c; 

    } while (n);

    printf("%d\n", m);
    return 0;
}