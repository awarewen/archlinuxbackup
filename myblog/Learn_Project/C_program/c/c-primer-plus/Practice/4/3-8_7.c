// 3-8_7.c
// 编写一个程序
// 将一个double变量设置为1.0/3.0, 将一个float变量设置为1.0/3.0
// 分别显示两次计算结果三次，一次显示6位小数，一次显示12位小数
// 一次显示小数后面16位小数
//
#include <stdio.h>
#include <float.h>

#define EX 1.0/3.0

int main (void){

  float f_value = EX;
  double d_value = EX;

  printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);//最小有效位

  printf("1. f_value = %.6f,  d_value = %.6f.\n", f_value, d_value);
  printf("2. f_value = %.12f, d_value = %.12f.\n", f_value, d_value);
  printf("3. f_vlaue = %.16f, d_value = %.16f.\n", f_value, d_value);

  return 0;
}
