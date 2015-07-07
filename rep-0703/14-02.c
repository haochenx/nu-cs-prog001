/*
  FILE     : 14-02.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function03.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150707
 */

#include <stdio.h>
#define DIM 3

void max_min (int (*arr)[], int arrn, int *max, int *min);

int main (void) {
  int arr[DIM][DIM] = {{1, 20, 8}, {20, -2, -20}, {1, 2, -21}};
  int max, min, n = 3;
  int i, j;

  max_min(arr, n, &max, &min);

  for (i = 0; i < n; ++i) {
    for (j = 0; j < n; ++j) {
      printf ("%d ", arr[i][j]);
    }
    printf ("\n");
  }
  printf ("the (max, min) value of the above array is: \n");
  printf ("(%d, %d)\n", max, min);

  return 0;
}

void max_min (int arr[DIM][DIM], int arrn, int *max, int *min) {
  int i, j;
  if (arrn <= 0) return;

  *max = *min = arr[0][0];

  for (i = 0; i < arrn; ++i)
    for (j = 0; j < arrn; ++j) {
      if (arr[i][j] > *max) {
	*max = arr[i][j];
      } else if (arr[i][j] < *min) {
	*min = arr[i][j];
      }
    }
}
