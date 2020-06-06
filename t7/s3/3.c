#include <stdio.h>

int main() {
    FILE *file = fopen64("bac.txt", "r");
    int s, s1, smin;
    int x;

    fscanf(file, "%d", &x); // pas initializare
    s = s1 = x;
    while (!feof(file)) { // parcurgerea sirului
        fscanf(file, "%d", &x);
        s += x;
        while (!feof(file) && s < s1) { // se salveaza in s1 suma mai mica si in s suma car urmeaza
            fscanf(file, "%d", &x);
            s1 = s;
            s = s1 + x;
            if (s > s1) { // daca suma noua mai mare decat suma veche verificam daca s1 < smin
                if (s1 < smin)
                    smin = s1;

                if (!feof(file)) { // se trece la urmatoarea suma daca mai exista elemente
                    fscanf(file, "%d", &x);
                    s1 = s;
                    s += x;
                }
            }
        }
        s1 = s = 0; // reinitializare s >= s1
    }

    printf("%d\n", smin);
    return 0;
}