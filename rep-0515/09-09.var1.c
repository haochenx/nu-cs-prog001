/*
  FILE     : 09-09.var1.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150516
 */

#include <stdio.h>

void swap(int*, int*);

int main (void) {
  int arr[10], max_idx;
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

  swap(&arr[0], &arr[max_idx]);

  printf ("The array after swapping the largest cell "
          "with the first one:\n");
  for (i=0; i < m; ++i) {
    printf ("%-2d: %d\n", i, arr[i]);
  }

  return 0;
}

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
