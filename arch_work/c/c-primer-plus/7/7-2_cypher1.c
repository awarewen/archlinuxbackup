//7-2-cypher1.c --更改输入，空格不变
//从输入栈中获取一个输入队列，遇到\n结束并打印原字符的下一个字符，空格不变
#include <stdio.h>
#define SPACE ' ' //空格
int main(void){
   char ch;
  ch = getchar ();

  while (ch != '\n'){
    if (ch == SPACE)
      putchar(ch);
    else
      putchar(ch + 1);
    ch = getchar();
  }
  putchar(ch);

  return 0;
}
