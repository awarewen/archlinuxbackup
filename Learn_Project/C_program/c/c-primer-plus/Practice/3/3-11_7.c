// 3-11_7.c
// 1英寸等于2.54厘米，0.0254米
// 提示用户输入身高，以厘米显示
//
#include <stdio.h>
#define INCH_TO_CENTIMETER 2.54 //英寸转换成厘米的比率

int main (void){

  float inch = 0;
  printf("Please enter your height (inch to centimeter): ");
  scanf (" %f", &inch);
  printf("your height is %.2f inch, to be %.2f centimeter.", inch, inch * INCH_TO_CENTIMETER);

  return 0;
}

