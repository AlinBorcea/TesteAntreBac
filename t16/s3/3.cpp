#include <iostream>
#include <fstream>

// Dimensiunea maxima a vectorului poate sa fie 10^5. Daca este mai mare sistemul de 
// operare nu aloca spatiul de memorie si programul nu face nimic. Este posibil sa nu fie 
// adevarat in cazul tau. La mine s-a intamplat asta pe Windows 10 1909.
// Daca dimen este 10^9 atunci avem 1 miliard de bytes = 953 MB Se aproprie de 1GB !!!
#define dimen 100000

using namespace std;

int main() {
    ifstream in("bac.in");
    bool f[dimen] = {false};
    int m, n, x;
    int istart, ifinal;
    int i;

    in >> m >> n >> x;
    istart = x;
    f[x] = true;
    for (i = 1; i < m; i++) {
        in >> x;
        f[x] = true;
    }

    ifinal = x;
    in >> x;
    f[x] = true;
    if (x < istart)
        istart = x;

    for (i = 1; i < n; i++) {
        in >> x;
        f[x] = true;
    }

    if (x > ifinal)
        ifinal = x;

    i = istart;
    while (i <= ifinal) {
        x = i;
        cout << i << ' ';
        i++;
        while (!f[i] || ((x % 2 == 0 && i % 2 == 0) || (x % 2 != 0 && i % 2 != 0)))
            i++;
    }

    return 0;
}