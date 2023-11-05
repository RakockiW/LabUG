#include <stdio.h>

int main() 
{
    int n, suma;
    suma = 0;
    printf("Podaj liczbę:\n");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        suma += i*i;
    }

    printf("Suma kwadratów liczb od 1 do n to: %d\n", suma);
    return 0;
}