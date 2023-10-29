#include <stdio.h>

int main()
{
    int a, b;
    printf("Podaj dwie liczby:");
    scanf("%d%d", &a, &b);

    int suma = a + b;
    printf("Suma: %d\n", suma);

    int roznica = a - b;
    printf("Różnica: %d\n", roznica);

    int iloczyn = a * b;
    printf("Iloczyn: %d\n", iloczyn);

    int iloraz = a / b;
    printf("Iloraz: %d\n", iloraz);

    int modulo = a % b;
    printf("Reszta z dzielenia: %d\n", modulo);
}