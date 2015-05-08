#include <stdio.h>

int main(void) {
  int x;

  scanf("%d", &x);
  printf("%d\n", x%2 == 0 ? 0 : 1);
  //printf("%d\n", x%2);

  return 0;
}
