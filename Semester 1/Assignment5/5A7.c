#include <stdio.h>

int main() {
    int num, count = 0, even_sum = 0, odd_sum = 0;
    printf("Using for loop:\n");

    for (int i = 0; i < 10; i++) {
        printf("\bEnter a number: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            even_sum += num;
        } else {
            odd_sum += num;
        }
    }
    printf("Sum of even digits = %d\nSum of odd digits = %d\n", even_sum, odd_sum);
    even_sum = 0;
    odd_sum = 0;

    printf("Using while loop:\n");

    while (count < 10) {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            even_sum += num;
        } else {
            odd_sum += num;
        }
        count++;
    }
    printf("Sum of even digits = %d\nSum of odd digits = %d\n", even_sum, odd_sum);
    even_sum = 0;
    odd_sum = 0;

    printf("Using do-while loop:\n");
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            even_sum += num;
        } else {
            odd_sum += num;
        }

        count++;
    } while (count < 10);
    printf("Sum of even digits = %d\nSum of odd digits = %d\n", even_sum, odd_sum);
    even_sum = 0;
    odd_sum = 0;
}