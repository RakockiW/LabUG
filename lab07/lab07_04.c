#include <stdio.h>

int najwiekszy_element(int *tab, int rozmiar) {
    int najwiekszy = 0;
    int *adres;
    for (int i = 0; i < rozmiar; i++) {
        if (*(tab + i) > najwiekszy ) {
            najwiekszy = *(tab+i);
            adres = &(*(tab+i));
        }
    }
    *adres = 0;
    return najwiekszy;
}

int main() {

    int tab[4] = {1, 6, 3, 4};
    int rozmiar = sizeof(tab) / sizeof(tab[0]);
    printf("Największy element tablicy to: %d\n", najwiekszy_element(tab, rozmiar));
    for (int i = 0; i < rozmiar; i++) {
        printf("%d element tablicy to: %d\n", i, *(tab+i));
    }
    return 0;
}