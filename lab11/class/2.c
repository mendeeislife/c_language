#include <stdio.h>
#include <math.h>

struct Point {
    int x, y;
};

double distance(struct Point a, struct Point b) {
    double d;
    d = sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
    
    return d;
}

int main() {
    double dis;
    struct Point a, b;
    printf("A point:\n");
    scanf("%d %d", &a.x, &a.y);
    printf("\nB point:\n");
    scanf("%d %d", &b.x, &b.y);

    dis = distance(a, b);

    printf("\nDistance:\n%f\n", dis);

    return 0;
}