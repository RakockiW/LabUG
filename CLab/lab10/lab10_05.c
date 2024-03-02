#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void drawRectangle(char znak, int czy_pusty, int wys, int szer) {
    for (int i = 0; i < wys; i++) {
        for (int j = 0; j < szer; j++) {
            if (czy_pusty) {
                if ((j == 0 || j == szer - 1) || (i == 0 || i == wys - 1)) {
                    printf("%c", znak);
                } else {
                    printf(" ");
                }
            } else {
                printf("%c", znak);
            }
        }
        printf("\n");
    } 
}


int main() {
    
    FILE *fp = fopen("config.txt", "r");
    char line_buff[100];
    char znak;
    int czy_pusty, wys, szer;

    while (fgets(line_buff, 100, fp))
    {   
        char key[100], value[100];
        sscanf(line_buff, "%s = %s", key, value);

        if (!(strcmp(key, "znak"))) {
            znak = value[0];
        }
        if (!(strcmp(key, "czy_pusty"))) {
            czy_pusty = atoi(value);
        }
        if (!(strcmp(key, "wys"))) {
            wys = atoi(value);
        }
        if (!(strcmp(key, "szer"))) {
            szer = atoi(value);
        }

    }

    drawRectangle(znak, czy_pusty, wys, szer);

    fclose(fp);

    return 0;
}