#include <stdio.h>

int main() 
{
    int x;
    printf("Dla 0 radianów wybierz 1\nDla 1/6 Pi rad wybierz 2\nDla 1/4 Pi rad wybierz 3\nDla 1/3 Pi rad wybierz 4\nDla 1/2 Pi rad wybierz 5\n");
    scanf("%d", &x);

    if (x == 1) {
        printf("0 radianów to 0 stopni.\n");
    } else if (x == 2) {
        printf("1/6 Pi rad to 30 stopni.\n");
    } else if (x == 3) {
        printf("1/4 Pi rad to 45 stopni.\n");
    } else if (x == 4) {
        printf("1/3 Pi rad to 60 stopni.\n");
    } else if (x == 5) {
        printf("1/2 Pi rad to 90 stopni.\n");
    } else {
        printf("Proszę wybrać opcję od 1 do 5.\n");
    }
}