#include <stdio.h>
#define ROZMIAR 10

int indeks_min(int tab[ROZMIAR], int przesuniecie) {
    int indeks = 0;
    int min = tab[przesuniecie];
    for (int i = przesuniecie; i < ROZMIAR; i++) {
        if (tab[i] <= min) {
            min = tab[i];
            indeks = i;
        }
    }
    return indeks;
}

int sortowanie_przez_selekcje(int tab[ROZMIAR]) {
    for (int i = 0; i < ROZMIAR; i++) {
        
        int temp = tab[indeks_min(tab, i)];
        tab[indeks_min(tab, i)] = tab[i];
        tab[i] = temp;
    }
    for (int i = 0; i < ROZMIAR; i++){
        printf("%d ", tab[i]);
    }
    printf("\n"); 
}

int main() {
    int tab[ROZMIAR] = {78, 4, 98, 7, 56, 68, 21, 43, 8, 1};
    sortowanie_przez_selekcje(tab);
    return 0;
}