// wheat.c --指数增长
//
#include <stdio.h>
#define SQUARES 64      //棋盘中个方格数量

int main(void){


  const double CROP = 2E16;     //世界小麦的年产量
  double current, total;
  int count = 1;
  

  printf("square    grains    total    ");
  printf("fraction of \n");
  printf("          added     gration  ");
  printf("world total\n");

  total = current = 1.0;      //从1颗米开始计算

  printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);

  while (count < SQUARES){


    count = count + 1;
    current = 2.0 * current;      //下一个格子翻倍
    total = total + current;      //更新总数
    printf("%4d %13.2e %12.2e %12.2e\n",
        count, current, total, total / CROP);
  }

  printf("That's all.\n");


  return 0;
}

