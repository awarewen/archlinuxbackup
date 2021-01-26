//6-16-4.c 
//打印一个A-U的三角序列
//
#include <stdio.h>
int main(void){

  int row,column;
  char ch = 'A';

  for (row = 1; row <= 6; row ++){
    for (column = 1; column <= row; column++)
      printf("%c", ch++);
    printf("\n");
       }

  return 0;
}
