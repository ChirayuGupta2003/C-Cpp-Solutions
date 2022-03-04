#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter first digit: ");
    scanf("%d", &a);

    printf("Enter second digit: ");
    scanf("%d", &b);

    printf("Enter third digit: ");
    scanf("%d", &c);

    if (a == c)
    {
        printf("The number %d%d%d is a palindrome", a, b, c);
    }
    else
    {
        printf("The number %d%d%d is a not palindrome", a, b, c);
    }
}