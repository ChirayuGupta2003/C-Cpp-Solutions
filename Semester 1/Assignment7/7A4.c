#include <stdio.h>
#include <math.h>

int prime(int num) {
    int cont = 0;
    if (num % 2 == 0) {
        return 0;
    } else {
        for (int i = 3; i < num; i += 2) {
            if (num % i == 0) {
                cont++;
            }
        }

        if (cont == 0) {
            return 1;
        } else {
            return 0;
        }
    }
}

int armstrong(int n) {
    int k = 0;
    int sum = 0;
    int t = n, x = n;

    while (n != 0) {
        k++;
        n = n / 10;
    }

    for (int i = 0; i < k; i++) {
        sum += (int) pow((t % 10), k);
        t = t / 10;
    }

    if (sum == x)
        return 1;
    else
        return 0;
}

int perfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i * i;
        }
    }
    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a;
    printf("Enter a number:");
    scanf("%d", &a);

    printf(prime(a) ? "%d is a prime number\n" : "%d is not a prime number\n", a);
    printf(armstrong(a) ? "%d is an armstrong number\n" : "%d is not an armstrong number\n", a);
    printf(perfect(a) ? "%d is a perfect number\n" : "%d is not a perfect number\n", a);

}
