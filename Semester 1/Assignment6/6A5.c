#include <stdio.h>

int main()
{
    int ch, a, b;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    if (1 <= ch && ch <= 4)
    {
        printf("Enter number a: ");
        scanf("%d", &a);

        printf("Enter number b: ");
        scanf("%d", &b);

        switch (ch)
        {
        case 1:
            printf("a + b = %d\n", a + b);
            break;

        case 2:
            printf("a - b = %d\nb - a = %d\n", a - b, a + b);
            break;
        case 3:
            printf("a * b = %d\n", a * b);
            break;
        case 4:
            printf("a / b = %f\nb / a = %f\n", (float)a / b, (float)b / a);
            break;
        }
    }
    else
    {
        printf("Enter a correct choice");
    }
}