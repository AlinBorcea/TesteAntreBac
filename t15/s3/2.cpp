#include <iostream>

using namespace std;

int main() {
    char s[100];
    int i, v, c, k;

    cin.getline(s, 100);
    
    i = k = 0;
    while (s[i]) {
        while (s[i] && s[i] == ' ')
            i++;
        
        c = v = 0;
        while (s[i] && s[i] != ' ') {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                v++;
            else
                c++;
            i++;
        }

        if (c == v)
            k++;
    }

    cout << k << endl;
    return 0;
}