/*
  FILE     : 12-02.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150626
 */

#include <stdio.h>

double f (double x);

int main (void) {
  double x, y;
  printf (" Input x:\n");
  scanf ("%lf", &x);
  y = f (x);
  printf (" f(x) = %lg\n", y);
  return 0;
}

double f (double x) {
  double y;
  y = 2 * x + 6;
  return y;
}

