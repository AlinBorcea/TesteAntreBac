#include <stdio.h>

int main() {
    FILE *file = fopen("bac.txt", "r");
    int x, y, z, s, s1, smax = 0;

    fscanf(file, "%d", &x);
    s1 = s = x;
    while (!feof(file)) {
        fscanf(file, "%d", &y);
        s += y;
        while (!feof(file) && s > s1) {
            fscanf(file, "%d", &y);
            s1 = s;
            s = s1 + y;
            if (!feof(file) && s < s1) {
                fscanf(file, "%d", &z);
                if (smax < s1)
                    smax = s1;
                s1 = s;
                s += z;
            }
        }
        //x = y;
        s1 = s = 0;
    }

    printf("%d\n", smax);
    return 0;
}