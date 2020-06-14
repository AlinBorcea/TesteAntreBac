#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[100], t[100] = {0}, *p;
    int exista = 0, doarVocale, i;

    cin.getline(s, 100);
    p = strtok(s, " ");
    while (p) {
        strcat(t, p);
        doarVocale = 1;
        for (i = 0; i < strlen(p) && doarVocale; i++)
            if (!strchr("aeiou", p[i]))
                doarVocale = 0;

        if (doarVocale) {
            strcat(t, " ");
            strcat(t, p);
            exista = 1;
        }

        strcat(t, " ");
        p = strtok(NULL, " ");
    }

    if (!exista)
        cout << "nu exista";
    else {
        strcpy(s, t);
        cout << s;
    }
    return 0;
}