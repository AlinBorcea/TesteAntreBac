#include <stdio.h>

int main() {
    char s[100];
    int i;

    gets(s);
    i = 0;
    while (s[i]) {
        while (s[i] && s[i] == ' ')
            i++;
        
        if (s[i] && !(s[i] >= 'A' && s[i] <= 'Z'))
            s[i] -= 32;

        i++;
        while (s[i] && s[i] != ' ') {
            if (!(s[i] >= 'a' && s[i] <= 'z'))
                s[i] += 32;
            i++;
        }
    }

    puts(s);
    return 0;
}