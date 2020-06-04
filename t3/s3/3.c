#include <stdio.h>

int main() {
    FILE *file = fopen("bac.in", "r");
    int m1, p1;
    int m2, p2;
    int x, i;

    fscanf(file, "%d", &x);
    if (x < 0) {
        m1 = x;
        p1 = 0;
    } else {
        m1 = 0;
    }

    i = 1;
    while (!feof(file)) {
        fscanf(file, "%d", &x);
        if (x < 0) {
            if (m1 == 0) {
                m1 = x;
                p1 = i;
            
            } else {
                m2 = x;
                p2 = i;
            }
        }
        i++;
    }

    printf("%d\n", p2 - p1 + 1);
    return 0;
}