#include <stdio.h>

int suma_cyfr(int n) {
    if (n < 10) {
        return n;
    }
    int wynik = n % 10 + suma_cyfr(n/10); 
    return wynik;
}


int main() {
    int n;
    printf("Podaj liczbę: \n");
    scanf("%d", &n);
    printf("Suma cyfr tej liczby to: %d \n", suma_cyfr(n));

    return 0;
}