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

struct Straight straightEquation(struct Point p1, struct Point p2) {
    int a = (p1.y - p2.y) / (p1.x - p2.x);
    int b = p1.y - (p1.y - p2.y) / (p1.x - p2.x) * p1.x;
    struct Straight temp = {a, b};
    return temp;  
}


int main() {
    struct Point p1 = {4, 0};
    struct Point p2 = {3, 2};
    struct Straight s1 = straightEquation(p1, p2);
    printf("y = %dx + %d\n", s1.a, s1.b);
    return 0;
}