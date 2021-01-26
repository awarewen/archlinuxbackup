// 12-11-dicerol1.
// 掷骰子模拟程序
// 多文件
//
#include "12-12-dicerol1.h"
#include <stdio.h>
#include <stdlib.h>  //rand原型

int roll_count = 0;

static int rollem (int sides){ 
  // 一个文件私有函数
  // 接受一个参数
  // 返回随机数

  int roll;

  roll = rand () % sides + 1; // 调用库函数rand产生一个伪随机数，sides控制随机数的范围？
  ++roll_count;  //计算函数的调用次数

  return roll;
}

int roll_n_dice (int dice, int sides){
  // 一个公有函数，所有文件可见
  // 接受两个参数
  // 调用rollem

  int d;
  int total = 0;

  if (sides < 2){

    printf("Need at least 2 sides.\n");
    return -2;
  }

  if (sides < 1){

    printf("Need at least 1 die.\n");
    return -1;
  }

  for (d = 0; d < dice; d++) //调用rollem 产生dice 次随机数?
    total += rollem (sides); //累加每次随机数的和

  return total;
}
