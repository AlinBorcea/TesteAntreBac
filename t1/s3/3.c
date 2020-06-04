#include <stdio.h>

int main() {
    FILE *file = fopen("bac.txt", "w");
    int x;

    printf("x = "); scanf("%d", &x);
    while (x >= 1) {
        fprintf(file, "%d ", x);
        x = (x + 1) / 3;
    }

    fprintf(file, "1 ");
    fclose(file);
    return 0;
}