#include <stdio.h>

int main() {
    char s[100];
    int i, uv = -1;

    gets(s);
    for (i = 0; s[i]; i++)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            uv = i;

    if (uv == -1) {
        puts("nu exista\n");
        return 0;
    }

    for (i = uv; s[i]; i++)
        s[i] = s[i + 1];

    puts(s);
    return 0;
}