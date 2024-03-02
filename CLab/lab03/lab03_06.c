#include <stdio.h>

int main() {
    int rok;

    printf("Podaj rok: \n");
    scanf("%d", &rok);

    if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) {
        printf("Rok jest przestępny. \n");
    } else {
        printf("Rok nie jest przestępny \n");
    }

    return 0;
}