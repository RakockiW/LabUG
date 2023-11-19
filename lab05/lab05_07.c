//WERSJA ROBOCZA

#include <stdio.h>

void wieksi_sasiedzi(int tab[20][20][20], int x, int y, int z) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                if (tab[i][j][k] > tab[i][j][k+1] && k + 1 < z) {
                    printf("tab[%d][%d][%d] = %d \n", i, j, k, tab[i][j][k]);
                    printf("%d %d %d \n", i, j, k);
                }
            }
        }
    }
}


int main() {
    int x, y, z;
    printf("Podaj liczbę indeksów x, y, z: \n");
    scanf("%d %d %d", &x, &y, &z);
    int tab[x][y][z];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("Podaj wartość tab[%d][%d][%d]: ", i, j, k);
                scanf("%d", &tab[i][j][k]);
            }
        }
    }

    wieksi_sasiedzi(tab, x, y, z);
}