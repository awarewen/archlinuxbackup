// 6-16_14.c
// 创建两个包含8个元素的double类型数组
// 让用户为第一个数组输入8个数据
// 第二个数组第n个元素为对应的第一个数组的n个元素的累计和
//
//
#include <stdio.h>

#define LEN 8

int main (void){

  double input[LEN] = {0};
  double sum[LEN] = {0};
  
  printf("Enter 8 number: \n");

/*
 * 这里有两个变量
 * i, j
 * i 用来控制sum和input同步
 * 用j来表示sum的上一个元素*/
  for (int i = 0, j=0; i < LEN; i++, j=i-1){
                // sum j 在第一次循环时我们需要它为0
                
    scanf (" %lf", &input[i]);
    sum [i] = sum[j] + input[i];//第一次循环sum j元素和i元素都表示同一个 是等于0的
    // sum i元素 用来存储sum 上一个值 和 input i元素的值相加的结果
    j=0;//只需要第一次为0和i同步,
       //后面都只需要比i少一来表示sum的上一个元素
  }

  printf("input : ");
  for (int i = 0; i < LEN; i++)
    printf("%5.2f ", input[i]);

  printf("\nsum : ");
  for (int i = 0; i < LEN; i++)
    printf("%5.2f ", sum[i]);

  return 0;
}
