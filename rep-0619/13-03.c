/*
  FILE     : 13-03.c
  REF      : http://www.ipl.cs.is.nagoya-u.ac.jp/~prog1/function02.htm
  AUTHOR   : Haochen Xie
  CREATION : 20150626
 */

#include <stdio.h>

void four (double a, double b,
           double *ans_plus,  double *ans_minus,
           double *ans_times, double *ans_divide);

int main (void) {
  double x = 1, y = 2;

  double ans_plus, ans_minus,
    ans_times, ans_divide;

  four(x, y,
       &ans_plus,  &ans_minus,
       &ans_times, &ans_divide);

  printf ("%lg + %lg --> %lg\n", x, y, ans_plus);
  printf ("%lg - %lg --> %lg\n", x, y, ans_minus);
  printf ("%lg * %lg --> %lg\n", x, y, ans_times);
  printf ("%lg / %lg --> %lg\n", x, y, ans_divide);

  return 0;
}

void four (double a, double b,
           double *ans_plus,  double *ans_minus,
           double *ans_times, double *ans_divide) {
  *ans_plus = a + b;
  *ans_minus = a - b;
  *ans_times = a * b;
  *ans_divide = a / b;
}
