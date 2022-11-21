#include <stdio.h>
#include "triangle.h"

int main(){
    Triangle t;
    printf("x1 = ");
    scanf("%d", &t.p1.x);
    printf("y1 = ");
    scanf("%d", &t.p1.y);
    printf("x2 = ");
    scanf("%d", &t.p2.x);
    printf("y1 = ");
    scanf("%d", &t.p2.y);
    printf("x3 = ");
    scanf("%d", &t.p3.x);
    printf("y3 = ");
    scanf("%d", &t.p3.y);
    printf("Area: %.2f\n", Area(t));
    printf("Perimeter: %.2f\n", Perimeter(t));
    return 0;
}