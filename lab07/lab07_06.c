#include <stdio.h> 

int wypelnianie_tablicy(int *wskA, int *wskB) {
    int rozmiar = wskB - wskA + 1;
    for (int i = 0; i < rozmiar; i++) {
        *(wskA+i) = i+1;
        printf("%d ", *(wskA+i));
    }
} 

int main() {
    int rozmiar = 15;
    int tab[rozmiar];
    int *wskA = &tab[0];
    int *wskB = &tab[rozmiar-1];
    wypelnianie_tablicy(wskA, wskB);
}