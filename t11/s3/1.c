#include <stdio.h>
#include <math.h>

void patrate(int x, int y) {
    int exista = 0, s = 0;
    for (int i = x; i <= y; i++) {
        if (sqrt(i) == (int) sqrt(i)) {
            s += i;
            if (!exista) {
                printf("%d", i);
            } else 
                printf("+%d", i);
            exista = 1;
        }
    }

    if (!exista)
        printf("nu exista");
    else
        printf("=%d", s);
}

int main() {
    patrate(10, 50);
    return 0;
}