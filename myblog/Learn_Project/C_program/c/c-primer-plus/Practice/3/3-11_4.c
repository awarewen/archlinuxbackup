// 3-11-4.c 
// 编写一个程序，读取一个浮点数，先打印成小数点形式，摘打印成指数形式
// 然后再打印成p计数法(即16进制计数法)
// 按下面格式输出
// Enter a flaoting-point value: 64.25
// fixed-point notation: 64.250000
// exponential notation: 6.425000e+01
// p notation: 0x1.01p+6
//
#include <stdio.h>
int main(void){


  double value;

  printf("Enter a floating-point value: ");
  scanf(" %lf", &value);
  printf("fixed-point notation: %.6f\n", value);
  printf("exponential notation: %.6e\n", value);
  printf("p notation: %#a\n");

  return 0;
}
