//WERSJA ROBOCZA

#include <stdio.h>

int przeszukiwanie(int tab[], int poczatek, int koniec, int szukana) {
    if (poczatek > koniec) {
        return -1;
    }

    int srodek = (poczatek+koniec) / 2;

    if (tab[srodek] == szukana) {
        return 1;
    }

    if (srodek > szukana) {
        return przeszukiwanie(tab, poczatek, srodek-1, szukana);
    } else {
        return przeszukiwanie(tab, srodek+1, koniec, szukana);
    }
}

int main() {
    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int szukana;
    printf("Podaj liczbę:\n");
    scanf("%d", &szukana);
    
    int rozmiar_tablicy = sizeof(tab) / sizeof(tab[0]); 
    int wynik = przeszukiwanie(tab, 0, rozmiar_tablicy-1, szukana);
    
    printf("%d\n", wynik);
    return 0;
}