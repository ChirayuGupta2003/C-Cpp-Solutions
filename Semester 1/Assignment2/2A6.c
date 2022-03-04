#include <stdio.h>

int main()
{
    int a, b, c, temp;
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    // With third variable
    temp = a;
    a = c;
    c = b;
    b = temp;
    printf("a = %d, b = %d, c = %d", a, b, c);
}