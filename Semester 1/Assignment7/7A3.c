#include <stdio.h>

void compute_gross(float gross_sal, float da, float hra, float basic_pay)
{
    gross_sal = basic_pay + hra + da;
    printf("Gross salary is: %.2f", gross_sal);
}

int main()
{
    float basic_pay, gross_sal, da, hra;
    printf("Enter basic pay: ");
    scanf("%f", &basic_pay);

    da = 0.2 * basic_pay;
    hra = 0.1 * basic_pay;

    compute_gross(gross_sal, da, hra, basic_pay);
}