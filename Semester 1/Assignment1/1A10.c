#include <stdio.h>
#include <math.h>

int main() {
    float r, x1 = 2, y1 = 2, x2 = 5, y2 = 6, area, perimeter, l;
    l = sqrtf(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    r = l / 2;
    area = (22 / 7) * pow(r, 2);
    perimeter = 2 * (22 / 7) * r;
    printf("Area = %f\n", area);
    printf("Perimeter = %f", perimeter);
}
