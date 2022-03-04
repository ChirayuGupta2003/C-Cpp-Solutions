#include <stdio.h>

int main()
{
    int temp;
    printf("Enter temperature in centigrade: ");
    scanf("%d", &temp);

    if (temp <= 0)
    {
        printf("Freezing weather");
    }
    else if (0 < temp && temp < 10)
    {
        printf("Very Cold weather");
    }
    else if (10 <= temp && temp < 20)
    {
        printf("Cold weather");
    }
    else if (20 <= temp && temp < 30)
    {
        printf("Normal temperature");
    }
    else if (30 <= temp && temp < 40)
    {
        printf("Hot");
    }
    else if (temp >= 40)
    {
        printf("Very hot");
    }
}