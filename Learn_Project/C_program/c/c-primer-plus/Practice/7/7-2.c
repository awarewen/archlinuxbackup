// 7-2.c
// 读取输入直到#为止
// 程序打印每个输入的字符和其对应的ASCLL码(十进制）
// 每行打印8个 `字符-ASCLL`组合
//
#include <stdio.h>

#define STOP '#'

#define NEW_LINE 8

int main (void){

  char ch, len = 0;

  while ( (ch = getchar ()) != STOP){

    if ((len%8) == 0)
      printf("\n");
    printf("%c-%d | ", ch, ch);
      len++;
  }

  return 0;
}
