/*
  FILE     : 15-02.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function04.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150707
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  double x, y;

  if (argc < 2+1) {
    fprintf (stderr, "usage: %s <integer 1> <integer 2>\n",
	     argv[0]);
    exit (1);
  }

  x = atof (argv[1]);
  y = atof (argv[2]);

  printf ("%lg + %lg --> %lg\n", x, y, x + y);
  printf ("%lg - %lg --> %lg\n", x, y, x - y);
  printf ("%lg * %lg --> %lg\n", x, y, x * y);
  printf ("%lg / %lg --> %lg\n", x, y, x / y);

  return 0;
}
