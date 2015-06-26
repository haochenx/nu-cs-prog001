/*
  FILE     : 12-01.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150626
 */

#include <stdio.h>

int f (int x);

int main (void) {
  int x, y;
  printf (" Input x:\n");
  scanf ("%d", &x);
  y = f (x);
  printf (" f(x) = %d\n", y);
  return 0;
}

int f (int x) {
  int y;
  y = 2 * x + 6;
  return y;
}
