
#include <iostream>

using namespace std;

void perechi(int n) {
    int d, e;
    e = 0;
    for (d = 1; d * d <= n; d++)
        if (n % d == 0) {
            if ((d % 2 == 0 && (n / d) % 2 != 0) || (d % 2 != 0 && (n / d) % 2 == 0)) {
                e = 1;
                cout << '[' << d << ' ' << n / d << "] ";
            }
        }
    if (e == 0)
        cout << "nu exista";
}

int main() {
    int n;
    cin >> n;
    perechi(n);
    return 0;
}