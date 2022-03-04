#include <stdio.h>
#include <ctype.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int x = a / 100, y = (a / 10) - 10 * x, z = a % 10;
    int t[3] = {x, y, z};

    for (int i = 0; i < 3; i++)
    {
        switch (t[i])
        {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        case 0:
            printf("Zero ");
            break;
        }
    }
}
