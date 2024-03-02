#include <stdio.h>

int liczba_binarna(int n) {
    if (n == 1) {
        printf("%d", n%2);
    } else {
        liczba_binarna(n/2);
        printf("%d", n%2);
    }
}



int main() {
    int n;
    printf("Podaj liczbę: \n");
    scanf("%d", &n);
    liczba_binarna(n);
    printf("\n");
    
    return 0;
}