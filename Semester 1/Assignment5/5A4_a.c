#include <stdio.h>

int main() {
  int i;

  printf("Enter a number: \n");
  scanf("%d", &i);
  for (int j = i; j > 0; j--) {
    for (int l = 0; l < j - 1; l++) {
      printf(" ");
    }
    for (int t = i - j + 2; t > 1; t--) {
      printf("%d", t - 1);
    }
    for (int u = 1; u <= i - j; u++) {
      printf("%d", u + 1);
    }
    printf("\n");
  }
}
