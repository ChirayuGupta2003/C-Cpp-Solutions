#include <stdio.h>

int main()
{
    int num, a, b, c;
    printf("Enter value of num: ");
    scanf("%d", &num);

    a = num / 100;
    b = num / 10 - (10 * a);
    c = num - (num / 10) * 10;
    printf("Sum = %d\n", a + b + c);
    printf("Product = %d", a * b * c);
}