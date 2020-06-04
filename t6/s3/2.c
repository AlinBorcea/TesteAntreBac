#include <stdio.h>

int main() {
    char s[100];
    int c, v;
    int i, j;

    gets(s);
    i = 0;
    while (s[i]) {
        while (s[i] && s[i] == ' ')
            i++;
        
        c = v = 0;
        j = i;
        while (s[i] && s[i] != ' ') {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                v++;
            else
                c++;
            i++;
        }

        if (v < c) {
            while (j < i) {
                printf("%c", s[j]);
                j++;
            }
            printf("\n");
        }
    }

    return 0;
}