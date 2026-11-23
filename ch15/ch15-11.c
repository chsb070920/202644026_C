#include <stdio.h>

typedef struct Point {
    double x;
    double y;
} Point;

int main(){
    Point a, b, c;
    scanf("%lf %lf", &a.x, &a.y);
    scanf("%lf %lf", &b.x, &b.y);
    c.x = (a.x + b.x) / 2;
    c.y = (a.y + b.y) / 2;
    c.x += c.x >= 0 ? 1e-9 : -1e-9;
    c.y += c.y >= 0 ? 1e-9 : -1e-9;
    printf("Center point = (%.1f, %.1f)", c.x, c.y);
    return 0;
}
