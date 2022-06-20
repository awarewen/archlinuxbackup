// 7-6.c
// 读取输入直到#，报告ei出现的次数
//
#include <stdio.h>

#define STOP '#'

int main (void){

  char ch, prev_ch;
  int count = 0;

  while ( (ch = getchar ()) != STOP){

    if (prev_ch == 'e' && ch == 'i')
      count++;

    prev_ch = ch;// 将上一个字符放在判断后面，以免prev刷新过早，造成和ch一直是同一个字符
  }

  printf("There it is %d of `ei`", count);

  return 0;
}
