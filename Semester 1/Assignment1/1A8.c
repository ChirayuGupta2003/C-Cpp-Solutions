#include <stdio.h>

int main() {
    char u;
    float val, f, c;

    printf("Enter temperature unit (c/f): ");
    scanf(" %c", &u);

    printf("Enter temperature value: ");
    scanf("%f", &val);

    f = (9 * val / 5) + 32;
    c = (val - 32) * 5 / 9;

    if (u == 'c') {
        printf("Value in fahrenheit = %f", f);
    } else if (u == 'f') {
        printf("Value in celsius = %f", c);
    } else {
        printf("Enter a correct unit");
    }
}
