#include <stdio.h>
#include <math.h>
#define ROZMIAR 10

int przeszukiwanie_binarne(int tab[ROZMIAR], int n) {
    int left = 0;
    int right = ROZMIAR;
    int result = 0;
    while (left <= right) {
        int middle = floor((left + right) / 2);
        if (tab[middle] < n) {
            left = middle + 1;
        } else if (tab[middle] > n) {
            right = middle - 1;
        } else {
            result = 1;
            return result;
        }
    }
    return result;
}

int main() {
    int tab[ROZMIAR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 13;
    if (przeszukiwanie_binarne(tab, n)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}