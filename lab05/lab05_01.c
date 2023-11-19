#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int roznica(int a, int b) {
    return a - b;
}

int iloczyn(int a, int b) {
    return a * b;
}

int iloraz(int a, int b) {
    return a / b;
}

int main() {

    int a, b;
    int wybor;
    printf("Podaj dwie liczby: \n");
    scanf("%d %d", &a, &b);
    printf("Wybierz opcję: \n");
    printf("1. Suma \n");
    printf("2. Różnica \n");
    printf("3. Iloczyn \n");
    printf("4. Iloraz \n");
    scanf("%d", &wybor);
    switch (wybor)
    {
        case 1:
            printf("Suma to: %d \n", suma(a,b));
            break;
        case 2:
            printf("Różnica to: %d \n", roznica(a,b));
            break;
        case 3:
            printf("Iloczyn to: %d \n", iloczyn(a,b));
            break;
        case 4:
            printf("Iloraz to: %d \n", iloraz(a,b));
            break;
    }


    return 0;
}