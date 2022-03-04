#include <stdio.h>

int main()
{
    float a, b;
    int c;
    printf("Enter value of a: ");
    scanf("%f", &a);

    printf("Enter value of b: ");
    scanf("%f", &b);

    c = a + b;
    printf("a = %f, b = %f, c = %d", a, b, c);
}