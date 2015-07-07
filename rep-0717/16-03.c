/*
  FILE     : 16-03.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/saiki.html
  AUTHOR   : Haochen Xie
  CREATION : 20150707
 */

#include <stdio.h>

int rec (int, int);

int main () {
  int x, y;

  printf ("Input integer x and y: ");
  scanf ("%d%d", &x, &y);

  printf ("sum {x | x in Z, %d <= x <= %d} --> %d\n",
	  x, y, rec (x, y));

  return 0;
}

int rec (int x, int y) {
  if (x >= y) return x;
  else return y + rec (x, y - 1);
}
