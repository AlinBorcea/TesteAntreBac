#include <iostream>

using namespace std;

void divPrimMax(int n, int &p) {
    int d = 1;
    while (n != 1) {
        d++;
        while (n % d == 0) {
            n /= d;
            p = d;
        }
    }
}

int main() {
    int n = 2000, p;
    divPrimMax(n, p);
    cout << p << endl;
    return 0;
}