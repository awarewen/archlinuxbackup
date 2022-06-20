// for-char.c --用字符来做计数
//
#include <stdio.h>
int main(void){

  char ch;

  for (ch = 'a'; ch <= 'z'; ch++)
    printf("%c is %d\n", ch, ch);

  return 0;

}
