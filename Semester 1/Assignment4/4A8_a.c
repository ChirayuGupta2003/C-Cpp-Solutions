#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;

    printf("Enter value of angle1: ");
    scanf("%d", &angle1);

    printf("Enter value of angle2: ");
    scanf("%d", &angle2);

    printf("Enter value of angle3: ");
    scanf("%d", &angle3);

    if (angle1 + angle2 + angle3 == 180 && angle1 != 0 && angle2 != 0 && angle3 != 0)
    {
        printf("Its a valid triangle");
    }
    else
    {
        printf("Its not a valid trinagle");
    }
    
}