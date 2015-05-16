/*
  FILE     : 08-02.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control00.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150516
 */

#include <stdio.h>

int main (void) {
  int a;

  printf ("Input a number: ");
  scanf ("%d", &a);

  if (a % 2 == 0) {
    printf ("%d is an even number.\n", a);
  } else {
    printf ("%d is an odd number.\n", a);
  }

  return 0;
}
