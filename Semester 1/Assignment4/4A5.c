#include <stdio.h>

int main()
{
    int math, chem, phy;

    printf("Enter marks obtained in Physics: ");
    scanf("%d", &phy);

    printf("Enter marks obtained in Chemistry: ");
    scanf("%d", &chem);

    printf("Enter marks obtained in Mathematics: ");
    scanf("%d", &math);

    if (math >= 60 && phy >= 55 && chem >= 60 && ((math + phy + chem) >= 190 || (math + chem) >= 130))
    {
        printf("The candidate is eligible for admission");
    }
    else
    {
        printf("The candidate is NOT eligible for admission");
    }
}