/*
  FILE     : 11-03.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/priprocessor.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150522
 */

#include <stdio.h>
#include <stdlib.h>

int main (void) {
  printf ("[Linux command called from program.]\n");
  system ("ls -la");

  return 0;
}
