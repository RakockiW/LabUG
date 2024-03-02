#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int wynik = fibonacci(n-1) + fibonacci(n-2);
        return wynik;
    }
}



int main (){

    int n;
    printf("Podaj liczbę: \n");
    scanf("%d", &n);
    printf("%d wyraz ciągu fibonnaciego to: %d \n", n, fibonacci(n));

    return 0;
}