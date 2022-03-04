#include <stdio.h>

int main()
{
    char grade;
    printf("Input the grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'E':
        printf("You have chosen: Excellent");
        break;
    case 'V':
        printf("You have chosen: Very Good");
        break;
    case 'A':
        printf("You have chosen: Average");
        break;
    case 'G':
        printf("You have chosen: Good");
        break;
    case 'F':
        printf("You have chosen: Fail");
        break;
    default:
        printf("Check your grade again");
    }
}