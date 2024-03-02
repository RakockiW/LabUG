#include <stdio.h>

long silnia (long n) {
    if (n < 2) {
        return 1;
    }

    long wynik = n * silnia(n-1);

    return wynik;

}


int main() {
    long n;
    printf("Podaj liczbę: \n");
    scanf("%ld", &n);
    printf("%ld! = %ld\n", n, silnia(n));
    
    return 0;
}