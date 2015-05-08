/*
  FILE     : 08-04.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control00.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150508
 */

#include <stdio.h>

int main (void) {
  int a;
  int is_even;
  
  scanf ("%d", &a);
  is_even= a % 2 == 0;

  switch (is_even) {
  case 1:
    // TRUE
    printf("%d is an even number\n", a);
    break;
  case 0:
    // FALSE
    printf("%d is an odd number\n", a);
    break;
  }

  return 0;
}
