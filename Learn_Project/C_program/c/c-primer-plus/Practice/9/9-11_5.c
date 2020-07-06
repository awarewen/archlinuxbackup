/*  
 *  2020-06-23 23:08
 *  @Aware
 *
 *  demand:
 *  编写并测试函数larger_of()
 *  把两个double 替换为较大的值
 *  将两个参数中较大的一个赋值给两个变量
 *  */

#include <stdio.h>

/*  
 *  替换为较大的值*/
void larger_of(double *d_num1, double *d_num2);

int main (void){

  double d_num1, d_num2;

  printf("Enter two numbel (double):");
  scanf(" %lf %lf", &d_num1, &d_num2);
  larger_of(&d_num1, &d_num2);
  
  printf("num1 = %.2lf num2 = %.2lf\n", d_num1, d_num2);
  return 0;
}

void larger_of (double *d_num1, double *d_num2){

  if (*d_num1 > *d_num2) *d_num2 = *d_num1;
  else if(*d_num1 < *d_num2) *d_num1 = *d_num2;
}
