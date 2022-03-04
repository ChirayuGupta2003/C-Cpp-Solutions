#include <stdio.h>

void perimeter(char s, int l, int b)
{
    switch (s)
    {
    case 'r':
        printf("The perimeter of rectangle is: %d\n", 2 * (l + b));
        break;
    case 's':
        printf("The perimeter of square is: %d\n", 4 * l);
        break;
    case 'c':
        printf("The circumfrence of circle is: %f\n", (float)3.141 * 2 * l);
    }
}

void area(char s, int l, int b)
{
    switch (s)
    {
    case 'r':
        printf("The area of rectangle is: %d\n", l * b);
        break;
    case 's':
        printf("The area of square is: %d\n", l * l);
        break;
    case 'c':
        printf("The area of circle is: %f\n", (float)3.141 * l * l);
    }
}

void calculation(char sh, int l, int b)
{
    int ch1;
    char *a;
    a = (sh == 'c') ? "Circumfrence" : "Perimeter";
    printf("1. Area\n");
    printf("2. %s\n", a);
    printf("Enter your choice: ");
    scanf("\n%d", &ch1);

    switch (ch1)
    {
    case 1:
        area(sh, l, b);
        break;
    case 2:
        perimeter(sh, l, b);
        break;

    default:
        printf("Choose between the given choices");
    }
}

int main()
{

    int ch;

    printf("Menu\n");
    printf("1. Rectangle\n");
    printf("2. Square\n");
    printf("3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        int ch1;
        int l, b;

        printf("Enter length: ");
        scanf("%d", &l);
        printf("Enter breadth: ");
        scanf("%d", &b);

        calculation('r', l, b);
        break;

    case 2:

        printf("Enter side length: ");
        scanf("%d", &l);

        calculation('s', l, 0);
        break;

    case 3:

        printf("Enter value of radius: ");
        scanf("%d", &l);

        calculation('c', l, 0);
        break;

    default:
        printf("Choose between the given choices");
    }
}