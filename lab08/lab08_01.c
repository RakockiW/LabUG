#include <stdio.h>
#define ROZMIAR 10

int przeszukiwanie_liniowe(int tab[ROZMIAR], int n) {
    int wynik = 0;
    for (int i = 0; i <= ROZMIAR; i++) {
        if (tab[i] == n) {
            wynik = 1;
            return wynik;
        }
    }
    return wynik;
}

int main() {
    int tab[ROZMIAR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 5;
    if (przeszukiwanie_liniowe(tab, n)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}