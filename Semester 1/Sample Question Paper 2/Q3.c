#include <stdio.h>

int main()
{
    int n, positiveCount = 0, negativeCount = 0, x;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number\n");
        scanf("%d", &x);
        (x >= 0) ? positiveCount++ : negativeCount++;
    }
    printf("Number of positive numbers entered is %d and the number of negative numbers entered is %d", positiveCount, negativeCount);
}