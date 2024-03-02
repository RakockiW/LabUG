#include <stdio.h>

int main()
{
    int poprawna, odp1, odp2, odp3, odp4;
    printf("Odgadnij liczbę z zakresu 1-5. Masz cztery szanse.\n");
    scanf("%d", &odp1);
    printf("Zła odpowiedź. Masz 3 szanse.\n");
    scanf("%d", &odp2);
    printf("Zła odpowiedź. Masz 2 szanse.\n");
    scanf("%d", &odp3);
    printf("Zła odpowiedź. Masz ostatnią szansę!.\n");
    scanf("%d", &odp4);
    
    if ((odp1!=1)&&(odp2!=1)&&(odp3!=1)&&(odp4!=1)) {
        poprawna = 1;
    } else if ((odp1!=2)&&(odp2!=2)&&(odp3!=2)&&(odp4!=2)) {
        poprawna = 2;
    } else if ((odp1!=3)&&(odp2!=3)&&(odp3!=3)&&(odp4!=3)) {
        poprawna = 3;
    } else if ((odp1!=4)&&(odp2!=4)&&(odp3!=4)&&(odp4!=4)) {
        poprawna = 4;
    } else if ((odp1!=5)&&(odp2!=5)&&(odp3!=5)&&(odp4!=5)) {
        poprawna = 5;
    }

    printf("Poprawną liczbą była liczba %d :P\n", poprawna);
    return 0;
}