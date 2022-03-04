#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    // With third variable
    temp = b;
    b = a;
    a = temp;
    printf("With using third variable\na = %d, b = %d\n", a, b);

    // Without third variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Without using third variable\na = %d, b = %d", a, b);
}
