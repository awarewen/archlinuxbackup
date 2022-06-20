// 12-5-parta.c
// 多文件编译
//
#include <stdio.h>

extern int count;  //使用一个其他文件定义的外部变量

static int total = 0;   //一个静态作用域的外部变量

void accumulate (int k);

void accumulate (int k){

  static int subtotal = 0;   //一个块内的静态变量

  if (k <= 0){

    printf("loop cycle: %d \n", count);
    printf("subtotal: %d; total: %d\n", subtotal, total);
    subtotal = 0;
  }
  else {

    subtotal += k;
    total += k;
  }
}
