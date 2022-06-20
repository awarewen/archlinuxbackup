// 6-16_18.c
// int 变量初始为5
// 在n个周期内，每减少1剩下数值翻倍，
// 程序一直运行显示变量数量，直到超过150
//
#include <stdio.h>

#define BREAK 150
#define START 5

int main (void){

  int num = START;
  int count = 1;

  printf("num = %d \n", num);
  while (num < 150){

    num = (num-count)*2;
    printf("num = %d \n", num);
    count ++;
  }

  return 0;
}
