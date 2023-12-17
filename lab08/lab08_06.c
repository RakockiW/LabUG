#include <stdio.h>
#include <time.h>
#define ROZMIAR 30

int przeszukiwanie_liniowe(int tab[ROZMIAR], int n) {
    int wynik = 0;
    for (int i = 0; i < ROZMIAR; i++) {
        if (tab[i] == n) {
            wynik = 1;
            return wynik;
        }
    }
    return wynik;
}

int przeszukiwanie_binarne(int tab[ROZMIAR], int n) {
    int left = 0;
    int right = ROZMIAR-1;
    int result = 0;
    while (left <= right) {
        int middle = (left + right) / 2;
        if (tab[middle] < n) {
            left = middle + 1;
        } else if (tab[middle] > n) {
            right = middle - 1;
        } else {
            result = 1;
            return result;
        }
    }
    return result;
}

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
}

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
}

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
}

int main() {
    int tab[ROZMIAR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int tab_unsorted[ROZMIAR] = {78, 4, 98, 7, 56, 68, 21, 43, 8, 1, 7, 4, 76, 21, 19, 36, 41, 67, 68, 8, 96, 28, 62, 46, 5, 58, 29, 52, 14, 59};
    int n = 8;
    clock_t start, stop;
    start = clock();
    przeszukiwanie_liniowe(tab, n);
    stop = clock();
    double czas = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("Przeszukiwanie liniowe zajęło %f sekundy.\n", czas);
    start = clock();
    przeszukiwanie_binarne(tab, n);
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("Przeszukiwanie binarne zajęło %f sekundy.\n", czas);
    start = clock();
    sortowanie_babelkowe(tab_unsorted);
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("Sortowanie bąbelkowe zajęło %f sekundy.\n", czas);
    start = clock();
    sortowanie_przez_wstawienie(tab_unsorted);
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("Sortowanie przez wstawienie zajęło %f sekundy.\n", czas);
    sortowanie_przez_selekcje(tab_unsorted);
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("Sortowanie przez selekcję zajęło %f sekundy.\n", czas);

    return 0;
}