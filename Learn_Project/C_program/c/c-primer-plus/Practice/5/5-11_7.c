// 5-11_7.c
// 输入一个double类型的值
// 设计一个函数 打印该数的平方
//
#include <stdio.h>

double square (double);

int main (void){

  double input;

  printf("Please enter the double number: ");

  scanf (" %lf", &input);

  printf("%.2lf is %.2lf", input, square (input) );

  return 0;
}

double square (double input){

  return input*input*input;
}
