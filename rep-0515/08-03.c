/*
  FILE     : 08-03.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control00.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150516
 */

#include <stdio.h>

int main (void) {
  int a;

  printf ("Input a number: ");
  scanf ("%d", &a);

  // hey! so what about a==0??
  switch (a < 0) {
  case 1:
    printf ("%d is a negative number.\n", a);
    break;
  case 0:
    printf ("%d is a positive number.\n", a);
    break;
  }

  return 0;
}
