#include <stdio.h>

struct contactInfo {
    char name[20];
    char surname[20];
    int phoneNumber;
};


int main() {
    struct contactInfo AdamInfo = {"Adam", "Kowalski", 555666777};
    struct contactInfo PiotrInfo = {"Piotr", "Nowak", 888999111};
    printf("Imię: %s\nNazwisko: %s\nNumer telefonu: %d\n", AdamInfo.name, AdamInfo.surname, AdamInfo.phoneNumber);
    printf("Imię: %s\nNazwisko: %s\nNumer telefonu: %d\n", PiotrInfo.name, PiotrInfo.surname, PiotrInfo.phoneNumber);
    return 0;
}