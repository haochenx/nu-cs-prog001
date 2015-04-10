#include <stdio.h>

int main(void) {
  int x, y;

  printf("input two integers and press enter: \n");
  scanf("%d%d", &x, &y);

  printf("%d + %d = %d\n", x, y, x+y);

  return 0;
}
