#include <stdio.h>
#include <stdlib.h>

int main() 
{

    int x1, y1, x2, y2;
    printf("Podaj współrzędne dwóch przeciwlewgłych wierzchołków prostokąta w formacie x1 y1 x2 y2: \n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int a, b, p, l;
    a = abs(x1-x2);
    b = abs(y1-y2);
    p = a * b;
    l = 2*a + 2*b;
    printf("Obwód prostokąta wynosi %d, a jego pole %d.\n", l, p);

    return 0;
}