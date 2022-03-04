#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the three angles: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a + b + c == 180) {
        if (a == 90 || b == 90 || c == 90) {
            if (b == c || a == c || a == b)
                printf("Triangle is right isosceles");
            else
                printf("Triangle is right");
        } else if (a == b && b == c && a == c)
            printf("Triangle is equilateral");
        else if (a != b && b != c && a != c)
            printf("Triangle is not special");
        else if (a == b || b == c || a == c)
            printf("Triangle is isosceles");

    } else
        printf("Not a Triangle");
}


