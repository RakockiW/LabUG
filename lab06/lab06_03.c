#include <stdio.h>

int wypisywanie(int n, int liczba) {
    

    if (liczba == n) {
        printf("%d\n", liczba);
    } else {
        printf("%d ", liczba);
        wypisywanie(n, liczba+1);
    }
    
    
}

int main() {

    int n;
    int liczba = 1;
    printf("Podaj liczbę: \n");
    scanf("%d", &n);
    wypisywanie(n, liczba);


    return 0;
}