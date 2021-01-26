// 7-4.c
// 使用if else 读取输入 直到#为止
// 用感叹号将句号替换，两个感叹号替换原来的感叹号
//
#include <stdio.h>

#define STOP '#'

int main (void){

  char ch;

  while ( (ch = getchar ()) != STOP){

    if (ch == '.') ch = '!'; //句号替换感叹号
      else if (ch == '!') printf("!");
    printf("%c", ch);
  }
  
  return 0;
}
