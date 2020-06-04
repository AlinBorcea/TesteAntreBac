#include <stdio.h>

int main() {
    char a, aux;
    int i, k;

    aux = '0';
    k = 0;
    for (i = 1; i <= 7; i++) {
        scanf("%c", &a);
        if (!(a == 'A' && aux == 'I') && !(aux == 'A' && a == 'I'))
            k++;
    }

    printf("%d\n", k);
    return 0;
}