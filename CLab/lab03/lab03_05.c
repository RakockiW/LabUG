#include <stdio.h>

int main()
{
    int odpowiedz;
    int kod;
    printf("Aby wpisać znak wpisz 1. Aby wpisać kod ASCII wpisz 2. \n");
    scanf("%d", &odpowiedz);
    
    if (odpowiedz == 1) {
        char znak;
        printf("Wpisz znak: \n");
        scanf(" %c", &znak);
        kod = (int)znak;
    }
    else {
        printf("Wpisz kod ASCII: \n");
        scanf("%d", &kod);
    }
    
    if ((kod >= (int)'a' && kod <= (int)'z') || (kod >= (int)'A' && kod <= (int)'Z')) {
        printf("Wpisany znak jest literą alfabetu. \n");
    } else {
        printf("Wpisany znak nie jest literą alfabetu. \n");
    }

    return 0;
}