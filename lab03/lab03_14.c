#include <stdio.h>

int main() 
{
    int kat;
    float rad;
    printf("Podaj wartość kąta w stopniach: ");
    scanf("%d", &kat);

    rad = (float)kat / 180;

    printf("Wartość kąta w radianach wynosi %f Pi rad.", rad);

    return 0;
}