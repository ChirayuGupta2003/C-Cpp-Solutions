#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int j = 1;
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);

  for (int i = 1; i <= a; i++) {
    int k = 1;
    while (k <= i) {
      printf("%d ", j);
      k++;
      j++;
    }
    printf("\n");
  }
  return 0;
}
