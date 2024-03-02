#include <stdio.h>

char char_of_string(char s[], int i) {
    return s[i-1];
}

int main() {
    char s[20];
    int i;
    
    printf("Podaj napis oraz liczbę: \n");
    scanf("%s %i", s, &i);
    printf("%c\n", char_of_string(s, i));
    return 0;
}