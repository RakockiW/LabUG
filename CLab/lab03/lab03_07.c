#include <stdio.h>

int main() {
    int dzien, miesiac, rok;

    printf("Wprowadź dzień, miesiąc i rok: \n");
    scanf("%d%d%d", &dzien, &miesiac, &rok);

    if (miesiac <= 12 && miesiac >= 1 && dzien <=31 && dzien >= 1 && rok != 0)
    {
        if (miesiac == 2) {
            if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0) && (dzien <= 29)) {
                printf("Data jest poprawna \n");
            } else if (dzien <= 28) {
                printf("Data jest poprawna \n");
            } else {
                printf("Data jest niepoprawna \n");
            }

        } else if ((miesiac == 1) || (miesiac == 3) || (miesiac == 5) || (miesiac == 7) || (miesiac == 8) || (miesiac == 10) || (miesiac == 12) && dzien <=31) {
            printf("Data jest poprawna. \n");
        } else if (dzien <=30) {
            printf("Data jest poprawna. \n");
        } else {
            printf("Data jest niepoprawna \n");
        }

    } else
    {
        printf("Data jest niepoprawna. \n");
    }

    return 0;
}