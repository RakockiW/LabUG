#include <stdio.h>


int czy_przestepny(int rok) {
    if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int rok;
    printf("Podaj rok: \n");
    scanf("%d", &rok);

    if (czy_przestepny(rok)) {
        printf("Rok jest przestępny.\n");
    } else {
        printf("Rok nie jest przestępny.\n");
    }

    return 0;
}