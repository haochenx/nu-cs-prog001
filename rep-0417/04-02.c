#include <stdio.h>

int main(void) {
  int a, b;

  printf("Input integer number a:\n");
  scanf("%d", &a);

  printf("Input integer number b:\n");
  scanf("%d", &b);

  printf("a + b = %d\n", a+b);
  printf("a - b = %d\n", a-b);
  printf("a * b = %d\n", a*b);
  printf("a / b = %d\n", a/b);

  return 0;
}
