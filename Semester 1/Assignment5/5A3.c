#include <stdio.h>

int main()
{
    char m;
    printf("Enter a character: ");
    scanf("%c", &m);

    switch (m)
    {
    case 'J':
    case 'j':
        printf("January, June and July");
        break;
    case 'F':
    case 'f':
        printf("February");
        break;
    case 'M':
    case 'm':
        printf("March and May");
        break;
    case 'A':
    case 'a':
        printf("April and August");
        break;
    case 'S':
    case 's':
        printf("September");
        break;
    case 'O':
    case 'o':
        printf("October");
        break;
    case 'N':
    case 'n':
        printf("November");
        break;
    case 'D':
    case 'd':
        printf("December");
        break;
    }
}