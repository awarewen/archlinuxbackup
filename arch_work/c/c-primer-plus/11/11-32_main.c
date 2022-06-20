//11-32_main.c
//main接受数值参数
//
#include <stdio.h>
#include <stdlib.h>  //包含了atoi函数，将字符数值转换为整数

int main (int argc, char **argv){

  int i, times;

  if (argc < 2 || (times = atoi (argv[1])) < 1)  //１个参数｜｜　atoi 将argv[1]中字符串去掉\0转换为整数
    printf("Usage:%s positive-number\n", argv[0]);
  else
    for (i = 0; i < times; i++)
      puts ("Hello, good looking!");

  return 0;
}
