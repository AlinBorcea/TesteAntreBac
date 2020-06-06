#include <stdio.h>

int main() {
    FILE *file = fopen64("bac.in", "r");
    int f[10] = {0};
    int p[10] = {0};
    int maxf;
    int i = 2;
    int x;

    fscanf(file, "%d", &x);
    f[x % 10]++;
    p[x % 10] = 1;
    maxf = 1;
    while (!feof(file)) {
        fscanf(file, "%d", &x);
        f[x % 10]++;
        if (f[x % 10] > maxf) {
            maxf = f[x % 10];
            p[x % 10] = i;
        
        } else if (f[x % 10] == maxf)
            p[x % 10] = i;
        
        i++;
    }
    fclose(file);

    for (i = 0; i < 10; i++)
        if (f[i] == maxf)
            printf("%d ", p[i]);

    printf("\n");
    return 0;
}