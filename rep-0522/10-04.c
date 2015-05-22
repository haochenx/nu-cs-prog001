/*
  FILE     : 10-04.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/io.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150522
 */

#include <stdio.h>
#include <stdlib.h>

int main (void) {
  float x1, x2, x3, y;
  FILE *fin, *fout;

  fin = fopen ("init", "r");
  fout = fopen ("result", "w");

  if (fin && fout) {
    fscanf (fin, "%f", &x1);
    fscanf (fin, "%f", &x2);
    fscanf (fin, "%f", &x3);

    y = x1 * x1 + x2 * x2 + x3 * x3;

    fprintf (fout, "Result = %f\n", y);
  } else {
    printf ("file not found.\n");
    return 1;
  }

  return 0;
}

