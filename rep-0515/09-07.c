/*
  FILE     : 09-07.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150516
 */

#include <stdio.h>

int main (void) {
  int arr[10], max;
  int m, i;

  printf ("Input an integer m (1 <= m <= 10): ");
  scanf ("%d", &m);
  printf ("Input m integers:\n");
  for (i=0; i < m; ++i) {
    scanf ("%d", &arr[i]);
  }

  max = arr[0];
  for (i=0; i < m; ++i) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf ("The largest of the m integers you input is %d\n", max);

  return 0;
}
