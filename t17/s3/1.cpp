#include <iostream>

using namespace std;

int maxim(int n) {
    int c = -1;
    while (n) {
        if (n % 2 != 0 && n % 10 > c)
            c = n % 10;
        n /= 10;
    }
    return c;
}

int main() {
    cout << maxim(5672883);
    return 0;
}