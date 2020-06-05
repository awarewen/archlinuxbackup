// 7-1.c
// 读取一行输入
// 读到#字符停止
// 报告读取到的空格数，换行符数，和其他所有字符数
//
#include <stdio.h>
#include <ctype.h>

#define STOP '#'

int main (void){

  int space_count = 0;//空格计数
  int lineBreak_count = 0;//换行符计数
  int graph_count = 0;//字母和数字计数
  char ch;

  while ( (ch = getchar ()) != STOP){

    if (ch == ' ')
      space_count++;
    else if (ch == '\n')
      lineBreak_count++;
    else if (isgraph(ch))
      graph_count++;
  }

  printf("space = %d, line break = %d, graph = %d \n", 
          space_count, lineBreak_count, graph_count);

  return 0;
}
