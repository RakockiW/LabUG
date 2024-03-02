#include <stdio.h>

int dwumian_newtona(int n, int k) {
    long n_silnia = 1;
    long k_silnia = 1;
    long roznica_n_k_silnia = 1;

    for (long i = n; i > 0; i--) {
        n_silnia *= i;
    }

    for (long i = k; i > 0; i--) {
        k_silnia *= i;
    }

    for (long i = n-k; i > 0; i--) {
        roznica_n_k_silnia *= i;
    }

    long dwumian = n_silnia/(k_silnia*roznica_n_k_silnia);

    return dwumian;
}

int main() {
    int h;
    long a = 1;
    printf("Podaj wysokość trójkąta: \n");
    scanf("%d", &h);

    for (int i = h; i >= 0; i--) {
        for (int j = i; j >= 0; j--) {
            printf(" ");
        }
        for (int j = h - i; j >= 0; j--) {
            printf("%d ", dwumian_newtona(h - i, j));
        }
        printf("\n");
    } 
    return 0;
}