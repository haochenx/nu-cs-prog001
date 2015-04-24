#include <stdio.h>

int main(void) {
  char *s = "ABCD";

  // s[5] is going to be null though, is it what you want?
  printf("%c\n", s[5]);

  return 0;
}
