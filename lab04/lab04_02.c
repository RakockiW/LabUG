#include <stdio.h>

int main () 
{
    int a,b;
    printf("Podaj dwie liczby naturalne:\n");
    scanf("%d%d", &a, &b);

    for (int i = 0; i<b; i++) {
        a=a*a;
    }
}