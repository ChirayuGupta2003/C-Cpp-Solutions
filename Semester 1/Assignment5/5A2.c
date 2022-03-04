#include <stdio.h>

int main() {
    int g;
    printf("Enter marks:\n");
    scanf("%d", &g);

    int arr[5] = {90 <= g && g <= 100,
                  60 <= g && g < 90,
                  50 <= g && g < 60,
                  30 <= g && g < 50,
                  0 <= g && g < 30};

    char f[5] = "ABCDF";

    for (int i = 0; i < 4; i++) {
        switch (arr[i]) {
            case 1:
                printf("%c grade", f[i]);
                break;
        }
    }

    switch (arr[4]) {
        case 1:
            printf("Fail");
            break;
    }
}
