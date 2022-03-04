#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter value of a:\n");
    scanf("%d", &a);

    printf("Enter value of b:\n");
    scanf("%d", &b);

    printf("Enter value of c:\n");
    scanf("%d", &c);

    // Using nested if statements

    if (a > b) {
        if (a > c)
            printf("Largest number: %d\n", a);
        if (a < c)
            printf("Largest number: %d\n", c);
    }
    if (b > a) {
        if (b > c)
            printf("Largest number: %d\n", b);
        if (c > b)
            printf("Largest number: %d\n", c);
    }

    // Using else if statements

    if (a > b) {
        if (a > c)
            printf("Largest number: %d\n", a);
        else if (a < c)
            printf("Largest number: %d\n", c);
    } else if (b > a) {
        if (b > c)
            printf("Largest number: %d\n", b);
        else if (c > b)
            printf("Largest number: %d\n", c);
    }

    // Using conditional operator "?"

    int temp = (a > b) ? a : b;
    int result = (c > temp) ? c : temp;
    printf("Largest number: %d\n\n", result);
}