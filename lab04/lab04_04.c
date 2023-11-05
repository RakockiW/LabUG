#include <stdio.h>

int main() 
{
    int tab[5];
    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;
    tab[3] = 4;
    tab[4] = 5;
    tab[5] = 6;
    for (int i=0; i<=5; i++) {
        tab[i] *= tab[i];
    }

    for (int i=0; i<=5; i++) {
        printf("%d\n", tab[i]);
    } 


    return 0;
}