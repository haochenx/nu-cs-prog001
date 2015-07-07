/*
  FILE     : 13-02.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function02.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150626
 */

#include <stdio.h>

double plus (double*, double*);

int main (void) {
  double x = 1, y = 2;
  printf ("%lg + %lg --> %lg\n", x, y, plus(&x, &y));
  return 0;
}

double plus (double *x, double *y) {
  return *x + *y;
}
