#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;
    printf("Enter value of a: ");
    scanf("%f", &a);

    printf("Enter value of b: ");
    scanf("%f", &b);

    printf("Enter value of c: ");
    scanf("%f", &c);

    s = (a + b + c) / 2;
    area = sqrtf(s * (s - a) * (s - b) * (s - c));
    printf("Area = %f", area);
}