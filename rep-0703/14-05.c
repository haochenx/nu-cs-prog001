/*
  FILE     : 14-05.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function03.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150707
 */

#include <stdio.h>

int main (void) {
  char *str = "this is some random sentence. haha";
  int count;

  for (count = 0; str[count] != '\0'; ++count);

  printf ("%s\n", str);
  printf ("the above string has %d character(s)\n",
	  count);

  return 0;
}
