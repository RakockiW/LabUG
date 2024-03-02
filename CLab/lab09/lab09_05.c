#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

struct Straight {
    int a;
    int b;
};

int isParallel(struct Straight s1, struct Straight s2) {
    if (s1.a == s2.a) {
        return 1;
    } else {
        return 0;
    }
}


int main() {
    struct Straight s1 = {3, 6};
    struct Straight s2 = {2, -3};
    
    if (isParallel(s1, s2)) {
        printf("Prosta y = %dx + %d oraz y = %dx + %d są równoległe.\n", s1.a, s1.b, s2.a, s2.b);
    } else {
        printf("Prosta y = %dx + %d oraz y = %dx + %d nie są równoległe.\n", s1.a, s1.b, s2.a, s2.b);
    }
    
    
    return 0;
}