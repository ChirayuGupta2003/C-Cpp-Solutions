#include <stdio.h>

int factorial(int n) {
    switch (n) {
        case 1:
        case 0:
            return 1;
            break;
        default:
            return n * factorial(n - 1);
    }
}

int series(int n) {
    switch (n) {
        case 1:
        case 0:
            return 1;
            break;
        default:
            return factorial(n - 1) + series(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The sum of the series with nth term n!/n is: %d", series(n));
}