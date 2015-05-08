/*
  FILE     : 09-02.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150508
 */

#include <stdio.h>

int main (void) {
  int arr[10];
  int i, n, x;

  printf ("Input n, then followed by n integers (n <= 10):\n");
  scanf ("%d", &n);

  for (i=0; i < n; ++i) {
    scanf ("%d", &arr[i]);
  }

  printf ("a    a*a    a*a*a\n");
  for (i=0; i < n; ++i) {
    x = arr[i];
    printf ("%-4d %-6d %-6d\n", x, x * x, x * x * x);
  }

  return 0;
}
