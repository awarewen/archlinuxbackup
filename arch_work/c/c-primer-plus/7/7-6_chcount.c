// 7-6-chcount.c
// 使用逻辑运算符
//
#include <stdio.h>
#define PERIOD '.'

int main(void){

  char ch;
  int charcount = 0;

  while ((ch = getchar()) != PERIOD){

    if (ch != '"' && ch != '\'')
      charcount++;
  }

  printf("There are %d non-quote characters. \n", charcount);

  return 0;
}
