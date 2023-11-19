#include <stdio.h>

int przekroj_a3(int a1, int b1, int a2, int b2) {
    if (a2 > a1 && a2 < b1) {
        return a2;
    } else {
        return -1;
    }
}

int przekroj_b3(int a1, int b1, int a2, int b2) {
    if (b1 > a2 && b1 < b2) {
        return b1;
    } else {
        return -1;
    }
}



int main(){
    int a1, b1, a2, b2;

    printf("Podaj dwa odcinki: \n");
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
    int a3 = przekroj_a3(a1, b1, a2, b2);
    int b3 = przekroj_b3(a1, b1, a2, b2);
    if (a3 > -1 && b3 > -1) {
        printf("a3 = %d\n", a3);
        printf("b3 = %d\n", b3);
    } else {
        printf("%d %d\n", a3, b3);
    }
    return 0;
} 