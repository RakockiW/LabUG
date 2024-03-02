#include <stdio.h>

int main() {
    int tab[10];
    printf("Podaj 10 liczb:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d element: %d\n", i+1, *(tab+i));
    }
    return 0;
}