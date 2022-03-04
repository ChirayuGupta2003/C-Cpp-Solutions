#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter value of side1 : ");
    scanf("%d", &a);

    printf("Enter value of side2 : ");
    scanf("%d", &b);

    printf("Enter value of side3 : ");
    scanf("%d", &c);

    if (a + b > c || b + c > a || c + a > b)
    {
        printf("It is a valid triangle");
    }
    else
    {
        printf("Its not a valid triangle");
    }
}