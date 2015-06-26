/*
  FILE     : 12-04.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150626
 */

#include <stdio.h>

int MaxV(int, int);

int main (void) {
  int a, b;
  printf ("Input integer a, b: ");
  scanf ("%d%d", &a, &b);
  printf ("max(%d, %d) = %d\n", a, b, MaxV(a, b));
  return 0;
}

int MaxV(int a, int b) {
  return a > b ? a : b;
}

