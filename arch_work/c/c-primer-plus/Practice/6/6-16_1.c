// 6-16-1.c
// 编写一个程序，创建一个包含26个字符的数组，并在其中储存26个小写字母，然后打印数组内容
//
#include <stdio.h>
#define STATUS 'a'

int main(void){


  char ch[26] = {0};
  char cha = STATUS;
  int num = 0;

  printf("26 chars: \n");
  while (num < 26){
    ch[num] = cha;
    printf("%2c", ch[num]);
    num++;
    cha += 1;
  }
   cha = STATUS;

  for (printf("\nfor :\n"), num = 0; num < 26; num++, cha += 1){
    ch[num] = cha;
    printf("%2c", ch[num]);
  }

  return 0;
}
