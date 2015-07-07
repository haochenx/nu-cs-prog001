/*
  FILE     : 14-03.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function03.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150707
 */

#include <stdio.h>

double dot_product (double *vec1, double *vec2);

int main (void) {
  double vec1[] = {1, 2, 3};
  double vec2[] = {4, 5, 6};
  int i;

  printf ("vec1: \n");
  for (i = 0; i < 3; ++i) {
    printf ("%lg ", vec1[i]);
  }
  printf ("\n");
  
  printf ("vec2: \n");
  for (i = 0; i < 3; ++i) {
    printf ("%lg ", vec2[i]);
  }
  printf ("\n");

  printf ("the dot product of the above 2 vectors is: %lg\n",
	  dot_product (vec1, vec2));

  return 0;
}

double dot_product (double *vec1, double *vec2) {
  double sum = 0;
  int i;

  for (i = 0; i < 3; ++i) {
    sum += vec1[i] * vec2[i];
  }

  return sum;
}
