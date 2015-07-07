/*
  FILE     : 13-04.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function02.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150707
 */

#include <stdio.h>

int is_prime (int);

int main (void) {
  int x;

  printf ("Input an integer: ");
  scanf ("%d", &x);

  printf ("Whether %d is (1) or not (0) an integer: %d\n",
	  x, is_prime(x));

  return 0;
}

int is_prime (int x) {
  int i;

  for (i = 2; i <= x / 2; ++i) {
    if (x % i == 0) {
      return 0;
    }
  }

  return 1;
}
