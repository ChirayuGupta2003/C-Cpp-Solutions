#include <stdio.h>

int main()
{
    int n, s = 1;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", s);
        s += 3;
    }
}