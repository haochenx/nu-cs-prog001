/*
  FILE     : 08-05.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control00.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150508
 */

#include <stdio.h>

int main (void) {
  int a, b, c;
  int delta;

  scanf("%d%d%d", &a, &b, &c);
  delta = b * b - 4 * a * c;

  if (delta == 0) {
    printf ("one real root\n");
  } else if (delta > 0) {
    printf ("two distinct real roots\n");
  } else {
    printf ("complex roots\n");
  }

  return 0;
}
