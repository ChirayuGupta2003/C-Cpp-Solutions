#include <stdio.h>

int main()
{
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    int hundredDigit = a / 100, tensDigit = a / 10 - (10 * hundredDigit), onesDigit = a - (a / 10) * 10;
    printf("%d\n", onesDigit);
    printf("%d %d\n", tensDigit, onesDigit);
    printf("%d %d %d\n", hundredDigit, tensDigit, onesDigit);
}