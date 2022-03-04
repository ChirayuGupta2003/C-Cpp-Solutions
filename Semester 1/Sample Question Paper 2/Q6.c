#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);

    printf((a % 2 == 0) ? "%d is an even number" : "%d is an odd number", a);
}