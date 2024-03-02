#include <stdio.h>

int main() 
{
    int n;
    printf("Podaj liczbę elementów tablicy: \n");
    scanf("%d", &n);
    int tab[n];

    for (int i=0; i<n; i++) {
        printf("Podaj liczbę:\n");
        scanf("%d", &tab[i]);
    }

    for (int i=0; i<n; i++) {
        printf("tab[%3d]=%d\n", i, tab[i]);
    }

    return 0;
}