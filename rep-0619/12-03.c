/*
  FILE     : 12-03.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150626
 */

#include <stdio.h>

int sum (int);

int main (void) {
  int n, ans;
  printf ("Input n:\n");
  scanf ("%d", &n);
  ans = sum(n);
  printf ("Summation = %d\n", ans);
  return 0;
}

int sum (int n) {
  int sum=0;

  for (int i = 1; i <= n; ++i) {
    sum += i;
  }

  return sum;
}

