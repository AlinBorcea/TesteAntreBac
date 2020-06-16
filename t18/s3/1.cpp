#include <iostream>

using namespace std;

void suma(int n, int &s) {
    int f[10] = {0};
    s = 0;
    while (n) {
        f[n % 10]++;
        n /= 10;
    }

    for (int i = 2; i <= 8; i += 2)
        if (f[i])
            s += i;
}

int main() {
    int s;
    suma(67638825, s);
    cout << s << endl;
    return 0;
}