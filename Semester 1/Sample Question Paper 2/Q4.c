#include <stdio.h>

int main()
{
    int x, count = 0;

    while (1)
    {
        printf("Enter the number: \n");
        scanf("%d", &x);

        if (x % 8 != 0)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    
    printf("The number of valid numbers entered is %d", count);
}