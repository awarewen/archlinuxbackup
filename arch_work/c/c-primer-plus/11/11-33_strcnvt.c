// 11-33_strcnvt.c
// strtol 将字符串数值转换为　long类型，并识别和报告字符串是否数字开头
//
#include <stdio.h>
#include <stdlib.h>
#define LIM 30

char * s_gets (char *, int);

int main (void){

  char number [LIM];
  char * end;
  long value;

  puts ("Enter a number (empty line to quit):");
  while (s_gets (number, LIM) && number [0] != '\0'){

    value = strtol (number, &end, 10);   //10 进制
    printf("base 10 input, base 10 output: %d, stopped at %s (%d) \n",
        value, end, *end);
  }
}
