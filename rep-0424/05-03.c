#include <stdio.h>
#include <string.h>

int main(void) {
  char *s = "ABCDE";
  size_t slen = strlen(s);
  size_t i;

  for (i=0; i < slen-1; ++i) {
    printf("%c\n", s[i]);
  }

  return 0;
}
