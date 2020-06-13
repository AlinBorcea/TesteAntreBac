#include <iostream>

using namespace std;

int nrDivPrimi(int n) {
    int d, p, c;
    d = 1;
    c = 0;
    while (n != 1) {
        d++;
        p = 0;
        while (n % d == 0) {
            n /= d;
            p++;
        }

        if (p % 2 != 0)
            c++;
    }
    return c;
}

int main() {
    cout << nrDivPrimi(9000);
    return 0;
}