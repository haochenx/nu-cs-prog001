/*
  FILE     : 15-03.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function04.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150707
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  int x, y;
  int sum, i;

  if (argc < 2+1) {
    fprintf (stderr, "usage: %s <integer 1> <integer 2>\n",
	     argv[0]);
    exit (1);
  }

  x = atoi (argv[1]);
  y = atoi (argv[2]);

  sum = 0;
  for (i = x; i <= y; ++i) {
    sum += i;
  }

  printf ("sum {x | x in Z, %d <= x <= %d} --> %d\n", x, y, sum);

  return 0;
}
