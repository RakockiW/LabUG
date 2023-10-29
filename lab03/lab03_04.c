#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Podaj trzy liczby: \n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c) {
        printf("Większa liczba to: %d \n", a);
    } else if (b > a && b > c){
        printf("Większa liczba to: %d \n", b);
    } else {
        printf("Większa liczba to: %d \n", c);
    }
}