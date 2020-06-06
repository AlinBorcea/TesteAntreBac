#include <stdio.h>

int main() {
    FILE *file = fopen64("bac.txt", "r");
    int lun, lun_max, ap_max;
    int x, k;

    fscanf(file, "%d", &k);
    fscanf(file, "%d", &x);
    lun = x % k == 0 ? 1 : 0;
    lun_max = ap_max = 0;

    while (!feof(file)) {
        fscanf(file, "%d", &x);
        if (x % k != 0) {
            if (lun > lun_max) {
                lun_max = lun;
                ap_max = 1;
            
            } else if (lun == lun_max)
                ap_max++;

            lun = 0;
        
        } else {
            lun++;
        }
    }

    fclose(file);
    printf("%d %d\n", lun_max, ap_max);
    return 0;
}