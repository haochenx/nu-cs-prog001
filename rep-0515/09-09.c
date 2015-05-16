/*
  FILE     : 09-09.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150516
 */

#include <stdio.h>

int main (void) {
  int arr[10], max_idx, tmp;
  int m, i;

  printf ("Input an integer m (1 <= m <= 10): ");
  scanf ("%d", &m);
  printf ("Input m integers:\n");
  for (i=0; i < m; ++i) {
    scanf ("%d", &arr[i]);
  }

  max_idx = 0;
  for (i=0; i < m; ++i) {
    if (arr[i] > arr[max_idx]) {
      max_idx = i;
    }
  }

  tmp = arr[0];
  arr[0] = arr[max_idx];
  arr[max_idx] = tmp;

  printf ("The array after swapping the largest cell "
          "with the first one:\n");
  for (i=0; i < m; ++i) {
    printf ("%-2d: %d\n", i, arr[i]);
  }

  return 0;
}
