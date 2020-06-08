#include <stdio.h>

int main() {
    FILE *file = fopen64("bac.txt", "r");
    int x, y;
    int c;

    fscanf(file, "%d", &x);
    c = 1;
    while (!feof(file)) {
        fscanf(file, "%d", &y);
        if (x == y)
            c++;
        else {
            printf("%d %d ", x, c);
            x = y;
            c = 1;
        }
    }

    printf("%d %d ", x, c);
    fclose(file);
    return 0;
}