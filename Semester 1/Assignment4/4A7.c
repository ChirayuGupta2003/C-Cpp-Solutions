#include <stdio.h>

int main()
{
    float basic, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic <= 10000)
    {
        hra = 0.2 * basic;
        da = 0.8 * basic;
    }
    else if (basic <= 20000)
    {
        hra = 0.25 * basic;
        da = 0.9 * basic;
    }
    else if (basic > 20000)
    {
        hra = basic * 0.3;
        da = basic * 0.95;
    }

    gross = hra + da + basic;
    printf("Gross Salary = %.2f", gross);
}