#include <stdio.h>

int main()
{
    int count;
    for (int i = 1; i < 200; i++)
    {
        if (i % 2 == 0 || i % 3 == 0)
        {
            printf(">>> %d\n", i);
            count++;
        }
    }
    printf("Number of integers: %d", count);
}