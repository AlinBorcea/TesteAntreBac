#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream out("bac.out");
    int p1, p2, a, c, k, x;

    cin >> p1 >> p2;
    for (a = 1; a <= p1; a++) {
        if (p1 % a == 0 && a < 10 && p1 / a < 10) {
            for (k = 0; k <= 9; k++) {
                for (c = 1; c <= p2; c++) {
                    if (p2 % c == 0 && c < 10 && p2 / c < 10) {
                        x = a;
                        x = x * 10 + p1 / a;
                        x = x * 10 + k;
                        x = x * 10 + k;
                        x = x * 10 + k;
                        x = x * 10 + c;
                        x = x * 10 + p2 / c;
                        out << x << endl;
                    }
                }
            }
        }
    }

    return 0;
}