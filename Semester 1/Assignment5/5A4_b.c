#include <stdio.h>

int factorial(int x) {
  int num = 1;
  for (int i = 1; i <= x; i++) {
    num = num * i;
  }
  return num;
}

int ncr(int n, int c) {
  return factorial(n) / (factorial(c) * factorial(n - c));
}

int main() {
  int a;
  printf("Enter the number of rows: ");
  scanf("%d", &a);

  for (int i = 0; i <= a; i++) {
    for (int k = 0; k < a - i; k++) {
      printf(" ");
    }
    for (int j = 0; j <= i; j++) {
      printf("%d ", ncr(i, j));
    }
    printf("\n");
  }
}