#include <stdio.h>

int main()
{
    printf("Using nested for loops\n");

    for (int i = 2; i <= 100; i++)
    {
        int count = 0;
        for (int j = 2; j < i; j++)
        {
            if ((i % j == 0))
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf(">>>%d\n", i);
        }
    }

    printf("Using nested while loops\n");

    int i = 2;
    while (i <= 100)
    {
        int j = 2, count = 0;
        while (j < i)
        {
            if ((i % j == 0))
            {
                count++;
            }
            j++;
        }
        if (count == 0)
        {
            printf(">>>%d\n", i);
        }
        i++;
    }

    printf("Using nested do-while loops\n");

    i = 2;
    do
    {
        int j = 2, count = 0;
        do
        {
            if ((i % j == 0))
            {
                count++;
            }
            j++;
        } while (j < i);
        if (count == 0)
        {
            printf(">>>%d\n", i);
        }
        i++;
    } while (i <= 100);
}