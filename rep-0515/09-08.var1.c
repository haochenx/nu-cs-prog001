/*
  FILE     : 09-08.var1.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/control01.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150516
 */

#include <stdio.h>

char *ordinal_suffix(int);

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

  printf ("The %d%s of the m integers you input is the largest, "
          "which is %d\n",
          max_idx + 1,
          ordinal_suffix (max_idx + 1),
          arr[max_idx]);

  return 0;
}

char *ordinal_suffix(int n) {
  int units = n % 10;
  switch (units) {
  case 1:
    return "st";
  case 2:
    return "nd";
  case 3:
    return "rd";
  default:
    return "th";
  }
}
