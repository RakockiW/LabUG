#include <stdio.h>

int wypisywanie(int n) {

     if (n == 1) {
        printf("%d", n);
    } else {
        wypisywanie(n-1);
        printf("%d ", n);
       
    } 
    
}

int main() {

    int n;
    int liczba = 1;
    printf("Podaj liczbę: \n");
    scanf("%d", &n);
    wypisywanie(n);


    return 0;
}