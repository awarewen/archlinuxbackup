// 12-10-r_drive.c
// 12-9的驱动程序
//
#include <stdio.h>
#include <stdlib.h>
extern void srand1 (unsigned int x);   //引用12-9中的函数,获取用户输入的种子
extern int rand1 (void);        //产生随机数

int main (void){

  int count;
  unsigned seed;

  printf("Please enter your choise for seed.\n");
  while (scanf (" %u", &seed) == 1){

    srand1 (seed); // 将用户的输入传递给处理模块
    for (count = 0; count < 5; count++)
      printf("%d\n", rand1 ());
    printf("Please enter next seed (q to quit):\n");
  }
  printf("Done.\n");

  return 0;
}
