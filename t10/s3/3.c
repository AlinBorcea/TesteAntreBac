#include <stdio.h>

int main() {
    FILE *file = fopen64("bac.txt", "r");
    int x, y, r, lun;
    int r_max, lun_max;

    lun = 1;
    r = r_max = lun_max = 0;
    fscanf(file, "%d", &x);
    while (!feof(file)) {
        fscanf(file, "%d", &y);
        r = y - x;
        lun++;

        while (!feof(file)) {
            x = y;
            fscanf(file, "%d", &y);
            if (y - x != r) {
                if (lun > lun_max) {
                    r_max = r;
                    lun_max = lun;
                }
            }
        }
        lun = 1;
        x = y;
    }

    printf("%d\n", r_max);
    return 0;
}