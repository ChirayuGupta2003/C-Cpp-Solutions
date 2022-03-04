#include <stdio.h>

int main() {
    for (int i = 1; i <= 500; i++) {
        int divisor_sum = 0;
        for (int n = 1; n < i; n++) {
            if (i % n == 0) {
                divisor_sum += n;
            }
        }

        if (divisor_sum == i) {
            printf(">>> %d\n", i);
        }
    }
}
