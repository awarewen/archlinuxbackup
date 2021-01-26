// 4-8_4.c
// 输入身高(inch) 和姓名
//
#include <stdio.h>
#define LEN 20

int main (void){

  char name[LEN];
  int height;

  printf("enter your name and height:\n");
  scanf (" %s %d", name, &height);
  printf("%s, you are %d feet tall", name, height);

  return 0;
}
