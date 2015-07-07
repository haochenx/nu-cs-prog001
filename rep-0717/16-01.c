/*
  FILE     : 16-01.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/saiki.html
  AUTHOR   : Haochen Xie
  CREATION : 20150707

  COMMENT : I wrote the solution to 16-01 with recursion style from
            the very beginning.
 */

#include <stdio.h>

int rec (int);

int main () {
  int n;

  printf ("Input integer n: ");
  scanf ("%d", &n);

  printf ("f(n) --> %d\n", rec(n));

  return 0;
}

int rec (int n) {
  if (n < 2) return 1;
  else return n * n + rec (n - 1);
}
