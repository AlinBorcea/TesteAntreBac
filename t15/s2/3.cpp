#include <iostream>

using namespace std;

int main() {
    int a[4][5], i, j;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++)
            if (j == 0)
                a[i][j] = i + 1;
            else
                a[i][j] = a[i][j - 1] + 4;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}