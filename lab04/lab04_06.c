#include <stdio.h>

int main () 
{
    int x,y;
    printf("Podaj długość i szerokość prostokąta:\n");
    scanf("%d%d", &x, &y);
    int tab[x][y];

    for (int i=0; i<x; i++) {
        for(int j=0; j<y; j++) {
            printf("Współrzędna [%d][%d]: \n", i, j);
            scanf(" %d", &tab[i][j]);
        }
    }

    for (int i=0; i<x; i++) {
                
        if (i==0) {
           printf("|");
           
           for (int j=0; j<y; j++ ) {
                printf("-");
            } 

        printf("|\n");

        }

        printf("|");
        
        for (int j=0; j<y; j++ ) {
            if (tab[i][j]==1) {
                printf("x");
            } else {
                printf(" ");
            }
        }

        printf("|");
        printf("\n");

        if (i==x-1) {
           printf("|");
           
           for (int i=0; i<y; i++ ) {
                printf("-");
            } 

        printf("|\n");

        }
    
    }
    
}