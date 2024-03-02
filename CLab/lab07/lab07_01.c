#include <stdio.h>

void wypisz_adresy(int zmienna_globalna, int zmienna_lokalna) {
    printf("WYNIK FUNKCJI:\n");
    printf("Adres zmiennej globalnej: %p\nAdres zmiennej lokalnej: %p\n", &zmienna_globalna, &zmienna_lokalna);
}


int zmienna_globalna = 1;

int main () {
    int zmienna_lokalna = zmienna_globalna;
    printf("Adres zmiennej globalnej: %p\nAdres zmiennej lokalnej: %p\n", &zmienna_globalna, &zmienna_lokalna);
    wypisz_adresy(zmienna_globalna, zmienna_lokalna);
    
    return 0;
}