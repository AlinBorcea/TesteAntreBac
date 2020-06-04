#include <stdio.h>

int main() {
    char s[100];
    int c = 0;

    gets(s);
    for (int i = 0; s[i]; i++) {
        while (s[i] && s[i] == ' ')
            i++;
        while (s[i] && s[i] != ' ' && !(s[i] >= '0' && s[i] <= '9'))
            i++;
        if (s[i] && s[i] >= '0' && s[i] <= '9') {
            while (s[i] && s[i] != ' ' && s[i] != ',')
                i++;
            if (s[i] != ',')
                c++;
            while (s[i] && s[i] != ' ')
                i++;
        }
    }

    printf("%s\n%d\n", s, c);
    return 0;
}