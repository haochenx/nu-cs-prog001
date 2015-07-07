/*
  FILE     : 15-01.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function04.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150707
 */

#include <stdio.h>

int main (int argc, char *argv[]) {
  int i;

  printf ("argc --> %d\n", argc);
  for (i = 0; i < argc; i++) printf ("argv --> %s\n", argv[i]);

  return 0;
}
