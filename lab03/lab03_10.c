#include <stdio.h>

int main() {
    int a, b, c;

    printf("Podaj wymiary odcinków: \n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Z tych odcinków można utworzyć trójkąt. \n");
    } else {
        printf("Z tych odcinków nie da się utworzyć trójkąta. \n");
    }
}
