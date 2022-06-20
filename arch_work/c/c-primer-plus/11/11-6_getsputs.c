//11-6_getsputs.c
//使用gets 和　puts输入输出字符串
//在c99以上gets和 puts都有替代
#include <stdio.h>
#define STLEN 81
int mian (void){

  char words [STLEN];

  puts ("Enter a string, please.");
  gets (words);
  printf("Your string twice:\n");
  printf("%s\n", words);
  puts (words);
  puts ("Done.");
  
  return 0;
}
