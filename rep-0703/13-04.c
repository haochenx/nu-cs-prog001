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

<<<<<<< HEAD
  printf ("%d is (1) or isn't (0) an integer: %d\n",
=======
  printf ("Whether %d is (1) or not (0) an integer: %d\n",
>>>>>>> rep-0703/ - finish 13-*.c and 14-*.c
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