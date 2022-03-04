#include <stdio.h>

int main() {
    float a, b;
    printf("Enter two numbers:\n");
    scanf("%f", &a);
    scanf("%f", &b);

    printf((a - b) >= -0.5 && (a - b) <= 0.5 ? "Approximate Numbers" : "Not an Approximate number");
}