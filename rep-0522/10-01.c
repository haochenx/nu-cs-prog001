/*
  FILE     : 10-01.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/io.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150522
 */

#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int a;
  FILE *fin, *fout;

  fin = fopen ("init", "r");
  fout = fopen ("res", "w");

  if (fin && fout) {
    fscanf (fin, "%d", &a);
    fprintf (fout, "%d\n", a);
  } else {
    printf ("file not found.");
    return 1;
  }

  fclose (fin);
  fclose (fout);

  return 0;
}

