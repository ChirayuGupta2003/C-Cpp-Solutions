#include <stdio.h>
#include <string.h>

int main() {
    int i;
    float f;
    char c;
    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a char: ");
    scanf(" %c", &c);

    printf("\nInteger = %d", i);
    printf("\nFloat = %f", f);
    printf("\nChar = %c", c);
}