#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Podaj dwie liczby: \n");
    scanf("%d%d", &a, &b, &c);

    if (a > b && a > c) {
        printf("Większa liczba to: %d \n", a);
    } else if (b > a && b > c){
        printf("Większa liczba to: %d \n", b);
    } else {
        print("Większa liczba to: %d \n", c);
    }
}