/*
  FILE     : 09-05.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150516
 */

#include <stdio.h>

int main (void) {
  int i, a, sum = 0;

  printf ("Input an integer: ");
  scanf ("%d", &a);

  // if we interpret 0~a as [0,a] here
  for (i=0; i <= a; ++i) {
    if (i % 3 == 0) {
      sum += i;
    }
  }

  printf ("sum {x | x in [0, %d] AND x is multiple of 3} = %d\n",
          a, sum);

  return 0;
}
