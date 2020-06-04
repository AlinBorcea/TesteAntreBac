#include <stdio.h>
#include <math.h>

int divizorSub10(int n) {
    int d = 9;
    while (d > 1 && n % d != 0)
        d--;
    return d != 1 ? d : -1;
}

int main() {
    FILE *file = fopen("bac.out", "w");
    int p1, p2;
    int mij = 9;
    int dj;
    int i, j;

    printf("p1 = "); scanf("%d", &p1);
    printf("p2 = "); scanf("%d", &p2);

    i = p1 > 9 ? divizorSub10(p1) : p1;
    dj = p2 > 9 ? divizorSub10(p2) : p2; 

    while (i >= 1) {
        mij = 9;        
        while (mij >= 0) {
            if (p1 % i == 0 && p1 / i < 10) {
                j = dj;
                while (j >= 1) {
                    if (p2 % j == 0 && p2 / j < 10) {
                        fprintf(file, "%d%d", i, p1 / i);
                        fprintf(file, "%d%d%d", mij, mij, mij);
                        fprintf(file, "%d%d\n", j, p2 / j);
                    }
                    j--;
                }
            }
            mij--;
        }
        i--;
    }

    fclose(file);
    return 0;
}