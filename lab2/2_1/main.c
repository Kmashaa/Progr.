#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "main.h"
int main() {
    int x1, x2, x3, y1, y2, y3;
    float a, b, c,P,s,r,R;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    while(a + b <= c || b + c <= a || c + a <= b) {
        printf("Error. Write the coordinates again");
        scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
        a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
        c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    }
    vw(a, b, c,x1,x2,x3,y1,y2,y3);
    P=perimetr(a, b, c);
    printf("\np=%f", P);
    s = area(P,a,b,c);
    printf("\n s=%f", s);
    r = rad(s, P);
    printf("\nr=%f", r);
    R = Rad(a, b, c, s);
    printf("\nR=%f", R);
    inf();
    ex();
    
    return 0;
}

void vw(float a, float b, float c,float x1, float x2, float x3, float y1, float y2, float y3) {
    float a2 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    float b2 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
    float c2 = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
    if (a == b && b == c) {
        printf("\nthis is regular triangle");
    }
    else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a)) {
        printf("\nthis is isosceles triangle");
    }
    if (a2+b2==c2|| (a2 + c2 == b2) || (c2 + b2 == a2)) {
        printf("\nthis is equilateral triangle");
    }
    else  if (a != b && b != c && c != a) {
        printf("\nthis is freeform triangle");
    }
}

    float perimetr(float a, float b, float c) {
        float p;
        p = a + b + c;
        return p;
    }
    float area(float P, float a, float b, float c) {
        float s,p;
        p = P / 2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        return s;
    }
    float rad(float s, float P) {
        float r;
        r = 2 * s / P;
        return r;
    }
    float Rad(float a, float b, float c, float s) {
        float R;
        R = a * b * c /( 4 * s);
        return R;
    }
    void inf(){
        printf("\nversion 1.0\n Kravchenko Maria Aleksandrovna");
    }
    void ex(){
        exit(0);
    }
