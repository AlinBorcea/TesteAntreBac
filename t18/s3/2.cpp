#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char cuvinte[21][20];
    int n, k, i, exista = 0;

    cin >> n >> k;
    for (i = 1; i <= n; i++)
        cin >> cuvinte[i];

    for (i = 1; i <= n; i++)
        if (i != k && strcmp(strstr(cuvinte[i], cuvinte[k]), cuvinte[k]) == 0) {
            cout << cuvinte[i] << ' ';
            exista = 1;
        }
    
    if (!exista)
        cout << "nu exista";
    return 0;
}