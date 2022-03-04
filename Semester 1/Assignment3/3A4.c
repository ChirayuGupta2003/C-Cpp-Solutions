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

    int temp = (a > b) ? a : b;
    int result = (c > temp) ? c : temp;
    printf("Largest number: %d\n", result);

    temp = (a < b) ? a : b;
    result = (c < temp) ? c : temp;
    printf("Smallest number: %d", result);
}
