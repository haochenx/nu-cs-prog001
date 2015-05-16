/*
  FILE     : 09-04.var1.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150516
 */

#include <stdio.h>

const int N = 3;

int main (void) {
  double arr[N], sum = 0;
  int i;

  printf ("Input %d numbers: ", N);
  for (i=0; i < N; ++i) {
    scanf ("%lf", &arr[i]);
  }

  for (i=0; i < N; ++i) {
    sum += arr[i];
  }

  printf ("The average of the numbers you input is: %lf", sum / N);

  return 0;
}
