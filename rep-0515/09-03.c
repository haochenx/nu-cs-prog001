/*
  FILE     : 09-03.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150516
 */

#include <stdio.h>

int main (void) {
  int n, i;
  int found = 0;

  printf ("Input integer n: ");
  scanf ("%d", &n);

  for (i=2; i <= n/2; ++i) {
    if (n % i == 0) {
      found = 1;
      break;
    }
  }

  if (found) {
    printf ("%d IS NOT a primary number\n", n);
  } else {
    printf ("%d IS a primary number\n", n);
  }

  return 0;
}
