#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool czy_pierwsza(int n){
    
    int reszta;

    for (int i=2; i <= sqrt(n); i++) {
        reszta = n % i;
        if (reszta == 0) {
            return false;
        }
    }

    if (reszta != 0) {
        return true;
    }


}

int main() {
    int a,b, wynik;

    printf("Podaj parę liczb: \n");
    
    scanf("%d%d", &a, &b);
    
    while (b>0) {
        if (czy_pierwsza(a)) {
            printf("%d\n", a);
            a++;
            b--;
        } else {
            a++;
        }
        
    }
   
   
    return 0;
}