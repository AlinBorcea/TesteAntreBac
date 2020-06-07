#include <stdio.h>
#include <string.h>

void sariSpatii(char s[], int *i) {
    while (s[*i] && s[*i] == ' ')
        *i++;
}

void sariCuvant(char s[], int *i) {
    while (s[*i] && s[*i + 1] && s[*i + 1] != ' ')
        *i++;
}

void adaugaSucces(char s[], int j) {
    char temp[100];
    strcpy(temp, s + j + 1);
    s[j + 1] = 0;
    strcat(s, " succes");
    strcat(s, temp);
}

int main() {
    char s[100] = "testez validez utilizez date corecte acum", l;
    int i, j;

   // gets(s);
    i = 0;
    while (s[i]) {
        sariSpatii(s, &i);
        sariCuvant(s, &i);
        if (s[i]) {
            j = i;
            sariSpatii(s, &i);
            sariCuvant(s, &i);
            if (s[i] && s[j] == s[i]) {
                adaugaSucces(s, j);
                i += 8;
            }
        }
    }

    puts(s);
    return 0;
}