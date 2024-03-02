#include <stdio.h>

int main () 
{
    int a,b,c;
    c = 1;
    printf("Podaj dwie liczby naturalne:\n");
    scanf("%d%d", &a, &b);
    int wynik = a;

    while (wynik < b) {
        wynik = wynik * a;
        c++;
    }

    printf("%d\n", c);

    return 0;
}