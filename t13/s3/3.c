#include <stdio.h>

int main() {
    FILE *file = fopen64("bac.txt", "w");
    int x;

    scanf("%d", &x);
    while (x >= 1) {
        fprintf(file, "%d ", x);
        x /= 2;
    }
    fclose(file);
    return 0;
}