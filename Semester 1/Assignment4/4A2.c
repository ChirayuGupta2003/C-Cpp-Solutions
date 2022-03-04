#include <stdio.h>

int main()
{
    int user_id, unit;
    char name[20];
    float bill, rate, bill_new, subcharge_amt;

    printf("Enter costumer id: \n");
    scanf("%d", &user_id);

    printf("Enter name: \n");
    gets(name);
    scanf("%s", name);

    printf("Enter units consumed: \n");
    scanf("%d", &unit);

    if (unit < 200)
    {
        bill = (float)unit * 1.2;
        rate = 1.2;
    }
    else if (200 <= unit && unit < 400)
    {
        bill = (float)unit * 1.5;
        rate = 1.5;
    }
    else if (400 <= unit && unit < 600)
    {
        bill = (float)unit * 1.8;
        rate = 1.8;
    }
    else if (unit >= 600)
    {
        bill = (float)unit * 2.0;
        rate = 2.0;
    }

    if (bill < 100)
    {
        bill_new = 100;
    }
    else if (bill > 400)
    {
        bill_new = 1.15 * bill;
        subcharge_amt = bill_new - bill;
    }

    printf("Customer IDNO : %d\n", user_id);
    printf("Customer name : %s\n", name);
    printf("Units used : %d\n", unit);
    printf("Amount charges @%.2f per unit : %.2f\n", rate, bill);
    printf("Subcharge amount : %.2f\n", subcharge_amt);
    printf("Net amount paid by the customer : %.2f", bill_new);
}