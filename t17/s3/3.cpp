#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream in("bac.txt");
    int f[10001] = {0};
    int n, x, y, i;

    in >> n;
    for (i = 0; i < n; i++) {
        in >> x;
        f[x]++;
    }

    int c = 0;
    while (in >> x >> y) {
        n = 1;
        for (i = x; i <= y && n; i++)
            if (f[i])
                n = 0;

        if (n)
            c++;
    }

    cout << c;
    return 0;
}