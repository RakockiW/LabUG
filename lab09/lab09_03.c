#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

struct Triangle {
    struct Point p1;
    struct Point p2;
    struct Point p3;  
};

int segmentLength(int x1, int x2, int y1, int y2) {
    int l = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return l;
}

int isCorrectTriangle(struct Triangle t1) {
    int l1 = segmentLength(t1.p1.x, t1.p2.y, t1.p1.y, t1.p2.y);
    int l2 = segmentLength(t1.p2.x, t1.p3.y, t1.p2.y, t1.p3.y);
    int l3 = segmentLength(t1.p1.x, t1.p3.y, t1.p1.y, t1.p3.y);
    if (l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2) {
        return 1;
    } else {
        return 0;
    }
}




int main() {
    struct Triangle t1 = {(-2, -5), (0, 4), (3, -2)};
    printf("%d\n", isCorrectTriangle(t1));
    return 0;
}