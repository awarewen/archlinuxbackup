// 12-13-manydice.c
// 多次掷骰子
// 多文件编译
//
#include <stdio.h>
#include <stdlib.h>           //库函数srand()函数原型
#include <time.h>            //time()函数原型
#include "12-12-dicerol1.h" //提供roll_n_dice 函数原型和 roll_count引用声明

int main (void){

  int dice, roll;
  int sides;
  int status;

  srand ((unsigned int) time (0)); //用time系统时钟作为参数产生一个随机种子
  printf("Enter the number of sides per die, 0 to stop.\n");

  while (scanf (" %d", &sides) == 1 && sides > 0){

    printf("How many dice?\n");
    if ((status = scanf (" %d", &dice)) != 1){ //输入控制,错误处理

      if (status == EOF) //输入错误
        break;
      else {

        printf("You should have entered an integer.");
        printf(" Let's begin again.\n");
        while (getchar () != '\n') //将错误的输入舍弃
          continue;
        printf("How many sides? enter 0 to stop.\n");
        continue; //进入下次的循环
      }
    }
      roll = roll_n_dice (dice, sides);
      printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
      printf("How many sides? Enter 0 to stop.\n");
    }
    printf("The rollem() function was called %d times.\n", roll_count);

    printf("GOOD DORTUNE TO YOU!\n");

    return 0;
}

