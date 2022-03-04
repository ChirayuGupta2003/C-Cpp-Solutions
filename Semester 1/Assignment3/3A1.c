#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("Enter third integer: ");
    scanf("%d", &c);

    printf("\n\n%d %d %d\n", a, b, c);
    printf("%d %d\n", b, c);
    printf("%d", c);
}
