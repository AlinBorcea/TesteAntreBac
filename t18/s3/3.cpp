#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream in("bac.txt");
    int x, lun, maxLun, nrLunMax;

    maxLun = nrLunMax = 0;
    while (in >> x) {
        if (x % 10 == 0) {
            lun = 1;
            while (in >> x && x % 10 == 0)
                lun++;

            if (lun > maxLun) {
                maxLun = lun;
                nrLunMax = 1;
            
            } else if (lun == maxLun)
                nrLunMax++;
        }
    }

    cout << maxLun << ' ' << nrLunMax;
    return 0;
}