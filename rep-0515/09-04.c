/*
  FILE     : 09-04.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150516
 */

#include <stdio.h>

int main (void) {
  float x, sum = 0;
  int i;

  printf ("Input 3 numbers: ");
  for (i=0; i < 3; ++i) {
    scanf ("%f", &x);
    sum += x;
  }

  printf ("The average of the numbers you input is: %f", sum / 3);

  return 0;
}
