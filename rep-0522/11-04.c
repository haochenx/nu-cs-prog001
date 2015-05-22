/*
  FILE     : 11-04.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/priprocessor.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150522
 */

#include <stdio.h>
#include <math.h>

#define EPS (1.0 / 1000)

int main (void) {
  double x;

  for (x = 0.0; x < 1.0 + EPS; x += 0.1) {
    printf ("exp(%3.1f) == %f\n", x, exp (x));
  }

  return 0;
}
