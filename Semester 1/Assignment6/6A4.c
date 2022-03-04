#include <stdio.h>

int main()
{
    printf("Using nested while loops\n");
    int i = 1;
    while (i <= 5)
    {
        int j = 1;
        while (j <= 10)
        {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }

    printf("Using nested do-while loops\n");
    i = 1;
    do
    {
        int j = 1;
        
        do
        {
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);

        printf("\n");
        i++;

    } while (i <= 5);
}