/*
  FILE     : 10-02.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/io.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150522
 */

#include <stdio.h>
#include <stdlib.h>

int main (void) {
  float x1, x2, x3, y;

  fscanf (stdin, "%f", &x1);
  fscanf (stdin, "%f", &x2);
  fscanf (stdin, "%f", &x3);

  y = x1 * x1 + x2 * x2 + x3 * x3;

  printf ("Result = %f\n", y);

  return 0;
}

