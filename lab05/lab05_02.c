#include <stdio.h>

int character_check(char a, char b) {
    if (a == b) {
        return 1;
    } else {
        return 0;
    }
}


int main() {
    char a, b;
    printf("Podaj dwa znaki: \n");
    scanf("%c %c", &a, &b);

    printf("%d\n", character_check(a,b));
    return 0;
}