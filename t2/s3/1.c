#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int d = n; d > floor(sqrt(n)); d--)
        if (n % d == 0)
            printf("(%d %d) ", d, n / d);

    return 0;
}