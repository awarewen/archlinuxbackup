//3-11-5.c
//一年大约有3.156×10^7秒，编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数
//
#include <stdio.h>
#define YEAR 3.156e+7

int main(void){

  int old;
  double yearSec;

  printf("Please enter you old of year: ");
  scanf(" %d", &old);
  yearSec = old * YEAR;
  printf("your old %d is %.2lf sec\n", old, yearSec);

  return 0;
}
