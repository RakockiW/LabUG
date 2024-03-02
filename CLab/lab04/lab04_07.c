#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Podaj liczbę: \n");
    
    scanf("%d", &n);
    
    int reszta;

    for (int i=2; i <= sqrt(n); i++) {
        reszta = n % i;
        if (reszta == 0) {
            printf("Jest to liczba złożona. \n");
            break;
        }
    }

    if (reszta != 0) {
        printf("Jest to liczba pierwsza\n");
    }


    return 0;
}