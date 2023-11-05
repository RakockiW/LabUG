#include <stdio.h>

int main () 
{
    int a,b;
    printf("Podaj dwie liczby naturalne:\n");
    scanf("%d%d", &a, &b);
    int wynik = a;

    for (int i = 1; i<b; i++) {
        wynik=wynik*a;
    }

    printf("%d do potęgi %d to: %d\n", a, b, wynik);

    return 0;
}