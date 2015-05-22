/*
  FILE     : 11-02.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/priprocessor.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150522
 */

#include <stdio.h>
#define MaxV(x,y) ((x) > (y) ? (x) : (y))

int main (void) {
  int x, y;

  printf ("Input 2 integers: ");
  scanf ("%d%d", &x, &y);

  printf ("The larger integer is %d\n", MaxV(x, y));

  return 0;
}

