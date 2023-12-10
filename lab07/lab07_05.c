#include <stdio.h>

void sortowanie_liczb(int *a, int *b, int *c) {
    if (*a > *b) {
        int temp = *b;
        *b = *a;
        *a = temp;
    } 
    if (*b > *c) {
        int temp = *c;
        *c = *b;
        *b = temp;
    }
    if (*a > *b) {
        int temp = *b;
        *b = *a;
        *a = temp;
    } 
}

int main() {
    int a = 4;
    int b = 6;
    int c = 2;
    int *wskA = &a;
    int *wskB = &b;
    int *wskC = &c;

    sortowanie_liczb(wskA, wskB, wskC);
    printf("%d %d %d", a, b, c);
    return 0;
}