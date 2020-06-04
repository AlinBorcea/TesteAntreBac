#include <stdio.h>

int baza(int n) {
    int maxi = n % 10;
    n /= 10;
    while (n) {
        if (n % 10 > maxi)
            maxi = n % 10;
        n /= 10;
    }
    return maxi + 1;
}

int main() {
    printf("%d\n", baza(50731));
    return 0;
}