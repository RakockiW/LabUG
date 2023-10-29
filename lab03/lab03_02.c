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

    float iloraz = (float)a / b;
    printf("Iloraz: %f\n", iloraz);

    int modulo = a % b;
    printf("Reszta z dzielenia: %d\n", modulo);
}