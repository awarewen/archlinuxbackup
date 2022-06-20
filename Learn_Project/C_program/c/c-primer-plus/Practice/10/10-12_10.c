/*  
 *  2020-07-08
 *  @Aware
 *
 *  Demand:
 *  编写一个函数将两个数组中对应的值相加
 *  把结果存储在第三个数组中
 *  */
#include <stdio.h>

#define LEN 5

void Sum_Ar_S(int ar1[], int ar2[], int len, int sum []);

int main (void){
  int ar1[LEN] = {1, 2, 3, 4, 5}, 
      ar2[LEN] = {1, 2, 3, 4, 5}, 
      sum[LEN] = {0};

  Sum_Ar_S(ar1, ar2, LEN, sum);

  for (int i = 0; i < LEN; i++)
    printf (" %d + %d = %d\n", ar1[i], ar2[i], sum[i]);
  return 0;
}

void Sum_Ar_S(int ar1[], int ar2[], int len, int sum[]){

  for (int i = 0; i < len; i++)
    sum[i] = ar1[i] + ar2[i];
}
