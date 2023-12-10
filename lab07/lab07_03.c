#include <stdio.h>

void zamiana_wartosci(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 1;
    int b = 2;
    printf("Przed zamianą:\n a: %d b: %d\n", a, b);
    zamiana_wartosci(&a, &b);
    printf("Po zamianie:\n a: %d b: %d\n", a, b);
    return 0;
}