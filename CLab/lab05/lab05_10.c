#include <stdio.h>

int dni_miesiaca(int m, int r) {
    if (m <= 12 && m >= 1 && r != 0)
    {
        if (m == 2) {
            if ((r % 4 == 0 && r % 100 != 0) || (r % 400 == 0)) {
                return 29;
            } else {
                return 28;
            } 
        } else if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)) {
            return 31;
        } else {
            return 30;
        }

    } else {
        return 0;
    }

}


int main() {
    int d, m, r;
    printf("Podaj miesiąc i rok:\n");
    scanf("%d %d", &m, &r);
    if (dni_miesiaca(m, r) == 0) {
        printf("Data nie jest poprawna.\n");
    } else {
        printf("%d miesiąc w roku %d ma %d dni.\n", m, r, dni_miesiaca(m, r));
    }

    return 0;
}