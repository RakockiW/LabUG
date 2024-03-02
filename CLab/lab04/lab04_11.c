#include <stdio.h>

int dwumian_newtona(int n, int k) {
    int n_silnia = 1;
    int k_silnia = 1;
    int roznica_n_k_silnia = 1;

    for (int i = n; i > 0; i--) {
        n_silnia *= i;
    }

    for (int i = k; i > 0; i--) {
        k_silnia *= i;
    }

    for (int i = n-k; i > 0; i--) {
        roznica_n_k_silnia *= i;
    }

    int dwumian = n_silnia/(k_silnia*roznica_n_k_silnia);

    return dwumian;
}

int main() {
    int h;
    int a = 1;
    h=5;

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