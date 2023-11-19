#include <stdio.h>
#include <string.h>

int if_palindrome(char word[]){
    int word_length = strlen(word);
    int same_characters=0;

    for (int i = 0; i < word_length; i++){
        if (word[i] == word[word_length-i-1]) {
            same_characters++;
        } 
    }
    if (same_characters == word_length) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char word[20];
    printf("Wpisz słowo: \n");
    scanf("%s", word);
    if (if_palindrome(word) == 1) {
        printf("Podane słowo jest palindromem.\n");
    } else {
        printf("Podane słowo nie jest palindromem.\n");
    }
    return 0;
}