/*
 * 2020-06-19
 * @Aware
 * Mail: blacktonewasvrazy@Gmail.com
 *
 * Demand:
 * 计算两数的调和平均数*/
#include <stdio.h>

/*
 * Calculate: 计算两数的调和平均数
 */double Calculate(double *d_num1, double *d_num2);

int main (void){

  double d_num1, d_num2, result;

  printf("Please enter tow number (double): ");
  scanf (" %lf %lf", &d_num1, &d_num2);

  result = Calculate(&d_num1, &d_num2);
  printf("%.2f and %.2f 调和: %.2f \n", d_num1, d_num2, result);
  return 0;
}

double Calculate (double *d_num1, double *d_num2){

  /*
   * 首先将两个浮点数截断为整数和小数部分*/
  return (1.0/ 
         (((1.0 / *d_num1 ) +
         (1.0 / *d_num2 ) )/2));
}

