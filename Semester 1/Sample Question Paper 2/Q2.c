#include <stdio.h>

int main()
{
    int a;
    printf("Enter the Balloon's number: \n");
    scanf("%d", &a);

    printf((a % 21 == 0) ? "This balloon can fly to miney.\n" : "This balloon cannot fly to miney.\n");
}