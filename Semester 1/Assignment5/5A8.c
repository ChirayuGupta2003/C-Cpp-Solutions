#include <stdio.h>

int main()
{
    int marks, count, x;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks);

        if (45 < marks && marks < 65)
        {
            count++;
            continue;
        }
        else if (!(0 < marks && marks < 100))
        {
            printf("A wrong mark has been entered");
            break;
        }
        x++;
    }
    if (x == 10)
    {
        printf("The number of students with marks between 45 & 65 are: %d", count);
    }
}