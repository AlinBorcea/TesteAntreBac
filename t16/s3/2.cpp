#include <iostream>

using namespace std;

int main() {
    int a[100][100], n, m, i, j, c;
    cin >> n >> m;

    c = 1;
    for (i = 1; i < n * m; i++)
        c += 2;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            a[i][j] = c * c;
            c -= 2;
        }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) 
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}