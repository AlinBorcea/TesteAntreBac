#include <stdio.h>

int main() {
    FILE *file = fopen64("bac.out", "w");
    int x;

    scanf("%d", &x);
    if (x <= 10) {
        while (x) {
            fprintf(file, "%d ", x);
            x--;
        }
        fclose(file);
        return 0;
    }

    while (x > 10) {
        fprintf(file, "%d ", x);
        x = x % 2 == 0 ? x / 2 : x - 1;
    }

    for (x = 10; x; x--)
        fprintf(file, "%d ", x);

    fclose(file);
    return 0;
}