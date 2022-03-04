#include <stdio.h>
#include <math.h>

int main() {
    float p = 10000, r = 5, t = 7, si, ci, x;
    si = (p * r * t) / 100;
    x = pow((1 + r / 100), t);
    ci = p * x;
    printf("SI = %f\n", si + p);
    printf("Ci = %f\n", ci);
}