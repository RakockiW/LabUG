#include <stdio.h>

int main() 
{
    int x;
    printf("Podaj liczbę: \n");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("Liczba jest podzielna przez 2.\n");
    } else if (x % 3 == 0) {
        printf("Liczba jest podzielna przez 3\n");
    } else if (x % 4 == 0) {
        printf("Liczba jest podzielna przez 4.\n");
    } else if (x % 5 == 0) {
        printf("Liczba jest podzielna przez 5.\n");
    } else  if (x % 6 == 0) {
        printf("Liczba jest podzielna przez 6.\n");
    } else {
        printf("Liczba nie jest podzielna przez liczby z zakresu 2-6.\n");
    }

    return 0;
}