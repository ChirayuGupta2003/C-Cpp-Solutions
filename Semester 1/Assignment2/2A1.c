#include <stdio.h>

int main()
{
    float basicPay, dearness, houseRent, vehicle, grossSalary;
    basicPay = 50000;
    dearness = 0.5 * basicPay;
    houseRent = 0.2 * basicPay;
    vehicle = 0.1 * basicPay;
    grossSalary = basicPay + dearness + houseRent + vehicle;
    printf("Total salary = Rs.%.2f", grossSalary);
}