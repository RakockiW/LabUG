#include <stdio.h>
#include <ctype.h>

int main() {
    char name[20];
    printf("Podaj nazwę pliku: \n");
    scanf("%s", name);
    FILE *fp = fopen(name, "r+");
    
    if (fp == NULL) {
        printf("Plik %s nie istnieje.\n", name);
        return 0;
    }

    int c;

    while ((c = fgetc(fp)) != EOF)
    {
        if (islower(c)) {
            fseek(fp, -1, SEEK_CUR);
            fputc(toupper(c), fp);
            fseek(fp, 0, SEEK_CUR);
        }
    }

    fclose(fp);
    

    return 0;
}