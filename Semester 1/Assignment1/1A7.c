#include <stdio.h>

int main() {
    float a, b, c, d;
    printf("Enter value of a: ");
    scanf("%f", &a);

    printf("Enter value of b: ");
    scanf("%f", &b);

    printf("Enter value of c: ");
    scanf("%f", &c);

    d = (a - b) / (b + c);
    printf("d = %f", d);
}