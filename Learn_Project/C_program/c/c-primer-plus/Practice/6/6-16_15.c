// 6-16_15.c
// 读取一行输入，倒序打印出来
// 每行字符不超过255个
//
#include <stdio.h>

#define LEN 255

int main (void){

  char str[LEN];
  int count = 0;

  printf("Please enter : \n");

/*
 * 当遇到换行符或则输入超过LEN-1时，清空输入流
 * 将count<LEN放在第一个判断
 * */

  while ( count < LEN && scanf ("%c", &str[count]) == 1 && str[count] != '\n'){

    if (str[count]== '\n')
      printf("-------\n");
    count ++;
  }
  printf("\ntransformation: \n");

  //需要将count-1
  for (int i = count-1; i >= 0; i--)
    printf("%c", str[i]);

  return 0;
}
