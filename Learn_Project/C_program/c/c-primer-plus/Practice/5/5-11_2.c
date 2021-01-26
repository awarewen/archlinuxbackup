// 5-11_2.c
// 提示用户输入一个整数
// 打印从该数到比它大10的整数

#include <stdio.h>

int main (void){

  int num = 0;

  printf("Please enter a integer : ");

  //scanf (" %d", &num);

  for (int i = 0; i <= num+10; i++)
  printf(" %d |", i);

  return 0;
}
