#include <stdio.h>

int main()
{
    int liczba = 3;
    int odp;
    printf("Odgadnij liczbę z zakresu 1-5. Masz trzy szanse.\n");
    scanf("%d", &odp);
    if (odp == liczba) {
        printf("Wygraleś!\n");
    } else if ((odp < 1)||(odp > 5)) {
        printf("Podano liczbę spoza zakresu.\n");
    } else {
        scanf("%d", &odp);
        if (odp == liczba) {
            printf("Wygrałeś!\n");
        } else if ((odp < 1)||(odp > 5)) {
                printf("Podano liczbę spoza zakresu.\n");
            } else {
                scanf("%d", &odp);
                if (odp == liczba) {
                    printf("Wygrałeś!\n");
                } else if ((odp < 1)||(odp > 5)) {
                    printf("Podano liczbę spoza zakresu.\n");
                } else {
                    printf("Nie  udało się odgadnąć liczby.\n");
                }
        }
    }
    return 0;
}