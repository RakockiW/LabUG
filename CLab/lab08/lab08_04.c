#include <stdio.h>
#define ROZMIAR 10

int sortowanie_przez_wstawienie(int tab[ROZMIAR]) {
    for (int i = 0; i < ROZMIAR; i++) {
        int element = tab[i];
        int k = i - 1;
        while (k >= 1 && tab[k] > element) {
            tab[k+1] = tab[k];
            k = k - 1;
        }
        tab[k+1] = element;
    }
    for (int i = 0; i < ROZMIAR; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int tab[ROZMIAR] = {2, 4, 98, 4, 56, 68, 21, 43, 8, 10};
    sortowanie_przez_wstawienie(tab);
    return 0;
}