#include <stdio.h>

int czy_data_poprawna(int d, int m, int r) {
    if (m <= 12 && m >= 1 && d <=31 && d >= 1 && r != 0)
    {
        if (m == 2) {
            if ((r % 4 == 0 && r % 100 != 0) || (r % 400 == 0) && (d <= 29)) {
                return 1;
            } else if (d <= 28) {
                return 1;
            } else {
                return 0;
            }

        } else if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12) && d <=31) {
            return 1;
        } else if (d <=30) {
            return 1;
        } else {
            return 0;
        }

    } else {
        return 0;
    }
}


int main() {
    int d, m, r;
    printf("Podaj dzień, miesiąć i rok.\n");
    scanf("%d %d %d", &d, &m, &r);

    if (czy_data_poprawna(d,m,r)) {
        printf("Data jest poprawna.\n");
    } else {
        printf("Data nie jest poprawna");
    }
    return 0;
}