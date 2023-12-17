#include <stdio.h>
#define ROZMIAR 10

int sortowanie_babelkowe(int tab[ROZMIAR]) {
    for (int i = ROZMIAR-1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (tab[j+1] < tab[j]) {
                int temp = tab[j+1];
                tab[j+1] = tab[j];
                tab[j] = temp;
            }
        }
    }
    for (int i = 0; i < ROZMIAR; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int tab[ROZMIAR] = {2, 4, 67, 4, 56, 68, 21, 43, 8, 10};
    sortowanie_babelkowe(tab);
    return 0;
}