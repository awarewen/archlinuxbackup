// 4-8-3.c
// 输入一个数，以小数点计数法和指数计数法打印
//
#include <stdio.h>

int main (void){

  float input = 0;

  printf("Please enter: ");
  scanf (" %f", &input);
  printf("The input is %.1f or % e \n", input, input);

  return 0;
}
