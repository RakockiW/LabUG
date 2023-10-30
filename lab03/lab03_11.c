#include <stdio.h>

int main() {
    int a, b, c;

    printf("Podaj wymiary odcinków: \n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b)) {
        printf("Z tych odcinków można utworzyć trójkąt prostokątny. \n");
    } else {
        printf("Z tych odcinków nie da się utworzyć trójkąta prostokątnego. \n");
    }

    return 0;
}
