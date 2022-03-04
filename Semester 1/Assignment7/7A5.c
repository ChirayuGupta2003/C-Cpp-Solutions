#include <stdio.h>

int factorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int strong(int n) {
    int k = 0, t = n, sum = 0, x = n;
    while (t != 0) {
        k++;
        t = t / 10;
        sum += factorial(n % 10);
        n = n / 10;
    }
    return (sum == x) ? 1 : 0;
}

int main() {
    int i = 1;
    while (i < 1000) {
        if (strong(i)) {
            printf(">>> %d\n", i);
        }
        i++;
    }
}