#include <stdio.h>
#include <math.h>

int main()
{
    // Part 1 (Armstrong Number)
    int a;
    int hundredDigit = a / 100, tensDigit = a / 10 - (10 * hundredDigit), onesDigit = a - (a / 10) * 10;
    printf("Enter an integer: ");
    scanf("%d", &a);

    int armstrongNum = pow(hundredDigit, 3) + pow(tensDigit, 3) + pow(onesDigit, 3);

    printf("%s", (armstrongNum == a) ? "Yes, it's an armstrong number\n" : "No, it's not an armstrong number\n");

    // Part 2 (Automorphic Number)
    int b;
    printf("Enter an integer: ");
    scanf("%d", &b);

    int automorphic = b * b, onesDigit2 = automorphic - (automorphic / 10) * 10;
    printf("%s", (b == onesDigit2) ? "Yes, it's an automorphic number" : "No, it's an not automorphic number");
}