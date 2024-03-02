#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int dzien1, miesiac1, rok1, dzien2, miesiac2, rok2;
    printf("Wprowadź datę pierwszą i drugą: \n");
    scanf("%d%d%d%d%d%d", &dzien1, &miesiac1, &rok1, &dzien2, &miesiac2, &rok2);

    int roznica_dni, roznica_miesiecy, roznica_lat;
    
    roznica_dni = abs(dzien1 - dzien2);
    roznica_miesiecy = abs(miesiac1-miesiac2);
    roznica_lat = abs(rok1-rok2);
    printf("Podane daty różni: \n");
    
    if (roznica_dni == 1) {
        printf("%d dzień, \n", roznica_dni);
    } else {
        printf("%d dni, \n", roznica_dni);
    }
    if (roznica_miesiecy == 1) {
        printf("%d miesiąc, \n", roznica_miesiecy);
    } else if((roznica_miesiecy < 5)&&(roznica_miesiecy != 0)) {
        printf("%d miesiące. \n", roznica_miesiecy);
    } else {
        printf("%d miesięcy. \n", roznica_miesiecy);
    }
    if (roznica_lat == 1) {
        printf("i %d rok. \n", roznica_lat);
    } else if((roznica_lat < 5) &&(roznica_miesiecy != 0)) {
        printf("i %d lata. \n", roznica_lat);
    } else {
        printf("i %d lat. \n", roznica_lat);
    }
    
    
    return 0;
}