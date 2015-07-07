/*
  FILE     : 14-01.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function03.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150707
 */

#include <stdio.h>

void max_min (int *arr, int arrn, int *max, int *min);

int main (void) {
  int arr[] = {1, 20, 8, 20, -2, -20};
  int max, min, n = 6;
  int i;

  max_min(arr, n, &max, &min);

  for (i = 0; i < n; ++i) {
    printf ("%d ", arr[i]);
  }
  printf ("\nthe (max, min) value of the above array is: \n");
  printf ("(%d, %d)\n", max, min);

  return 0;
}

void max_min (int *arr, int arrn, int *max, int *min) {
  int i;
  if (arrn <= 0) return;

  *max = *min = arr[0];

  for (i = 0; i < arrn; ++i) {
    if (arr[i] > *max) {
      *max = arr[i];
    } else if (arr[i] < *min) {
      *min = arr[i];
    }
  }
}
