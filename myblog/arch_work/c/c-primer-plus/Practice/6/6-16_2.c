//6-16-2.c
//使用嵌套循环，编写一个按正三角打印$的程序，5行
//
#include <stdio.h>

int main (void){


  int row,column;

  //这个循环，选择for来编写，一个控制行 一个用来控制每一行打印多少$
  for (row = 1; row <= 5; row++){
    for (column = 0; column < row; column++)
      printf("$");
    printf("\n");
  }

  return 0;
}
