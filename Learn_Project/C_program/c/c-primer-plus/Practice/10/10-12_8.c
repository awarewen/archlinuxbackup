/*  
 *  2020-07-07
 *  @Aware
 *
 *  Demand:
 *  创建一个8个元素的数
 *  将３～５元素拷贝至３个元素的数组中
 *  */
#include <stdio.h>
#define LEN 8
#define LEN2 3

/*
 * 拷贝n个元素
 * @ tarAr :目标数组
 * @ sourceAr :源数组
 * @ start :拷贝起始位置
 * @ end   :拷贝结束位置
 */void Copy_N(int tarAr[], int sourceAr[], int n);

int main (void){
  int inAr[LEN] = {0, 1, 2, 3, 4, 5, 6, 7}, outAr[LEN2];
  int *startP;
  startP = &inAr[3];

  Copy_N(outAr, startP, LEN2);

  for (int i = 0; i < LEN2; i ++){
    printf("- %d\n", outAr[i]);
  }
  return 0;
}

void Copy_N(int tarAr[], int *sourceAr, int n){

  for (int i = 0; i < n; i++){
    tarAr[i] = *(sourceAr+i);
  }
}
