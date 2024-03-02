#include <stdio.h>

int nwd(int a, int b) {

    int c = a % b;
    a = b;
    b = c;

    if (b == 0) {
        return a;
    } else {
        nwd(a,b);
    }
}


int main() {
    int a,b;

    printf("Podaj dwie liczby: \n");
    scanf("%d %d", &a, &b);
    printf("NWD(%d,%d) = %d\n", a, b, nwd(a,b));

    return 0;
}