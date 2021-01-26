// 5-11-1.c
// 编写一个程序，把用分钟表示的时间转换为用小时和分钟表示的时间
// 使用#define或const创建一个表示60的符号常量或const变量
// 通过while让用户重复键入值，直到用户输入小于0或等于0的值停止循环
//
#include <stdio.h>
#define HOUR 60

int main(void){

  int input = 1;
  //int BackScanf = 1;
  int hour, min;

  printf("==========分钟转换为小时和分钟表示==========\n");
  printf(" q to quit!\n");
  printf("Enter min:____ \b\b\b\b");

  while(scanf (" %d", &input) == 1 && input > 0){
    hour = input / HOUR;
    min = input % HOUR;
    printf("%dmin is %d hour and %d min\n", input, hour, min);
    printf("Please enter next (q to quit): ");
  }
  printf("Done!\n");

  return 0;
}
