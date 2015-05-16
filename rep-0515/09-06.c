/*
  FILE     : 09-06.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150516
 */

#include <stdio.h>

int main (void) {
  float arr[3], max_val, sum = 0;
  int i, max_idx;

  // read 3 float numbers from keybroad to arr
  printf ("Input 3 numbers: ");
  for (i=0; i < 3; ++i) {
    scanf ("%f", &arr[i]);
  }

  // find the max number in arr, store the
  // max to max_val and the index in max_idx
  max_val = arr[0];
  max_idx = 0;
  for (i=0; i < 3; ++i) {
    if (arr[i] > max_val) {
      max_val = arr[i];
      max_idx = i;
    }
  }

  // calculate the sum of the numbers in arr,
  // which are not the max
  for (i=0; i < 3; ++i) {
    if (i != max_idx) {
      sum += arr[i];
    }
  }

  // check against the triangular inequality theorem
  if (max_val < sum) {
    printf ("A triangular COULD be drawn "
            "with 3 sides of the following lengths: \n");
  } else {
    printf ("A triangular COULD NOT be drawn "
            "with 3 sides of the following lengths: \n");
  }

  // print the input numbers for the user's information
  for (i=0; i < 3; ++i) {
    printf ("%f ", arr[i]);
  }
  printf ("\n");

  return 0;
}
