#include <iostream>
#include <fstream>

#define max 1000000000
#define elif else if 
// asa se scrie else if in Python
// putina distractie
using namespace std;

int main() {
    ifstream in("bac.in");
    int x, min1, min2, min3;

    min1 = min2 = min3 = max;
    while (in >> x) {
        if (x % 100 == 20) {
            if (x < min1) {
                min3 = min2;
                min2 = min1;
                min1 = x;

            } elif (x < min2) {
                min3 = min2;
                min2 = x;
            
            } elif (x < min3)
                min3 = x;
        }
    }

    cout << min1 << ' ' << min2 << ' ' << min3 << endl;
    return 0;
}