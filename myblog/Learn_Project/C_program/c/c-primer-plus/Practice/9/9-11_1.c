/*
 * 设计一个min函数，返回两个double类型的值中较小的一个*/
#include <stdio.h>

/*
 * Min : 比较两个double类型的值
 * @ d_num1 
 * @ d_num2
 * 返回较小的一个值
 */double Min(double *d_num1, double *d_num2);

int main (void){

  double d_num1, d_num2;
  double ret_min;

  printf("Enter two number (double) : ");
  scanf (" %lf %lf", &d_num1, &d_num2);

  ret_min =  Min (&d_num1, &d_num2);
  printf("In %.2lf, %.2lf two number, %.2lf is the smaller number\n", d_num1, d_num2, ret_min);

  return 0;
}

double Min (double *d_num1, double *d_num2){

  return ( *d_num1 > *d_num2? *d_num2:*d_num1);
}
