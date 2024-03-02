#include <stdio.h>

int main() {
    FILE *fp = fopen("/home/LABPK/wrakocki/plik.txt", "r");

    if (fp == NULL) {
        printf("Plik plik.txt nie istnieje.\n");
    } else {
        printf("Plik plik.txt istnieje.\n");
    }

    fclose(fp);

    return 0;
}