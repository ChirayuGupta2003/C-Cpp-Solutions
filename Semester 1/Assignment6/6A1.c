#include <stdio.h>

int main() {
    int i = 0;
    while (i < 9) {
        int j = 0;
        while (j < 9) {
            printf("%d\t", j + 1);
            j++;
        }
        printf("\n");
        i++;
    }
}