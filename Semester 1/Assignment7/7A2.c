#include <stdio.h>

int count_even(int x) {
    switch (x % 2) {
        case 0:
            return 1;
        default:
            return 0;
    }
}

int main() {
    int n, x, count = 0;
    printf("Enter the number of integers to be checked: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &x);
        if (count_even(x)) {
            count++;
        }
    }
    printf("The number of even integers entered is: %d", count);
}