/*
  FILE     : 16-04.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/saiki.html
  AUTHOR   : Haochen Xie
  CREATION : 20150707
 */

#include <stdio.h>

int rec (int *arr, int n);

int main () {
  int arr[] = { 39, 66, 100, 20, 24 };
  int n = 5;
  int i;

  for (i = 0; i < n; ++i) {
    printf ("%d ", arr[i]);
  }
  printf ("\n");

  printf ("The sum of the above array is %d\n",
	  rec (arr, n));

  return 0;
}

int rec (int *arr, int n) {
  if (n < 2) return arr[0];
  else return arr[n-1] + rec (arr, n - 1);
}
