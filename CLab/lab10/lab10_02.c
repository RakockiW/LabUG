#include <stdio.h>

int main() {
    char name[20];
    printf("Podaj nazwę pliku: \n");
    scanf("%s", name);
    FILE *fp = fopen(name, "r");
    
    if (fp == NULL) {
        printf("Plik %s nie istnieje.\n", name);
        return 0;
    }

    char line_buff[1000];

    while (fgets(line_buff, 1000, fp))
    {
        fputs(line_buff, stdout);
    }
    
    fclose(fp);

    return 0;
}