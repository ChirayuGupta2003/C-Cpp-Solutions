#include <stdio.h>

int main() {
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if ((a >= 'A' || a >= 'a') && (a <= 'Z' || a <= 'z')) {
        if (a >= 'a' && a <= 'z') {
            if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
                printf("Its a vowel");
            else
                printf("Its a consonant");
        } else
            printf("Its uppercase");
    } else {
        int b = a - '0';
        if (b % 2 == 0)
            printf("It is divisible by 2");
        else if (b % 5 == 0)
            printf("It is divisible by 5");
    }
}