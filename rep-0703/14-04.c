/*
  FILE     : 14-04.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function03.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150707
 */

#include <stdio.h>

double dot_product (double *vec1, double *vec2, int dim);

int main (void) {
  double vec1[] = {1, 2, 3, 5};
  double vec2[] = {4, 5, 6, 7};
  int dim = 4;
  int i;

  printf ("vec1: \n");
  for (i = 0; i < dim; ++i) {
    printf ("%lg ", vec1[i]);
  }
  printf ("\n");
  
  printf ("vec2: \n");
  for (i = 0; i < dim; ++i) {
    printf ("%lg ", vec2[i]);
  }
  printf ("\n");

  printf ("the dot product of the above 2 vectors is: %lg\n",
	  dot_product (vec1, vec2, dim));

  return 0;
}

double dot_product (double *vec1, double *vec2, int dim) {
  double sum = 0;
  int i;

  for (i = 0; i < dim; ++i) {
    sum += vec1[i] * vec2[i];
  }

  return sum;
}
