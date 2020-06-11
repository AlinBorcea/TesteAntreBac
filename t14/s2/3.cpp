#include <iostream>

using namespace std;

int main() {
    int a[5][7], i, j;

    for (i = 0; i < 7; i++)
        a[0][i] = 1;

    for (i = 1; i < 5; i++)
        a[i][6] = 1;

    for (i = 1; i < 5; i++)
        for (j = 5; j >= 0; j--)
            a[i][j] = (a[i][j + 1] + a[i - 1][j]) % 10;


    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}