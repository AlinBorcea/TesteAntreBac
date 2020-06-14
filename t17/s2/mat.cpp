#include <iostream>

using namespace std;

int main() {
    int a[4][5], i, j;

    for (j = 4; j >= 0; j--)
        for (i = 3; i >= 0; i--)
            if (j == 4)
                a[i][j] = j - i;
            else
                a[i][j] = a[i][j + 1] + 4;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    return 0;
}