/*
  FILE     : 13-05.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function02.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150707
 */

#include <stdio.h>

void is_prime (int x, int *ans);

int main (void) {
  int x, ans;

  printf ("Input an integer: ");
  scanf ("%d", &x);

  is_prime (x, &ans);

  printf ("Whether %d is (1) or not (0) an integer: %d\n",
	  x, ans);

  return 0;
}

void is_prime (int x, int *ans) {
  int i;

  for (i = 2; i <= x / 2; ++i) {
    if (x % i == 0) {
      *ans = 0;
      return;
    }
  }

  *ans = 1;
  return;
}
