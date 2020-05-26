// 5-11_4.c
// 提示用户输入身高(厘米)
// 分别以厘米和英寸显示该值
// 允许有小数部分
// 程序循环运行，直到用户输入一个非正值
//
#include <stdio.h>

#define INCHE 2.54
#define FEET 12*INCHE
int main (void){

  float input;

  printf("Please enter your height (<=0 to quit): ");
  while ( scanf (" %f", &input) == 1 && input > 0){

    printf("%.1f cm = %d feet, %.1f inches \n", 
           input, (int)(input/(FEET)), input/INCHE);

    while (getchar ()!= '\n')
      continue;

    printf("Enter the next (<= 0 to quit):\n");
  }

  return 0;
}
