// 6-16_9.c
// 要求用户输入两个浮点数
// 设计一个函数返回两个浮点数之差除以两数之积的结果,然后在主函数打印
// 循环输入，直到输入非数值符号退出
//
#include <stdio.h>

float calculation (float, float);

int main (void){

  float f_value1, f_value2;

  printf("Please enter tow float number(q to quit): ");

  while ( scanf (" %f %f", &f_value1, &f_value2) == 2){

    printf("(%.2f - %.2f)/(%.2f * %.2f) = %.2f \n", 
            f_value1, f_value2,f_value1,f_value2,
            calculation(f_value1, f_value2)
            );

    printf("Enter the next nuber (q to quit): ");
  }

  return 0;
}

float calculation (float v1, float v2){


 return (v1 - v2)/(v1 * v2);
}
