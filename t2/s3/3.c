#include <stdio.h>

int main() {
    FILE *file = fopen("bac.in", "r");
    int x, max1, max2;

    fscanf(file, "%d", &x);
    if (x % 100 == 20)
        max1 = max2 = x % 100;
    else
        max1 = max2 = 0;
    
    while (!feof(file)) {
        fscanf(file, "%d", &x);
        if (x % 100 == 20) {
            if (x > max2) {
                max1 = max2;
                max2 = x;
            
            } else if (x > max1)
                max1 = x;
        }
    }

    printf("%d %d\n", max1, max2);
    return 0;
}