#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[100];
    int i;

    cin.getline(s, 100);
    for (i = 0; s[i]; i++)
        if (s[i] == '-') {
            strcpy(s + i, s + i + 1);
            i--;
        }

    cout << s << endl;
    return 0;
}