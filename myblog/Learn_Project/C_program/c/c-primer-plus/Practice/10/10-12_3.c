/*  
 *  2020-07-06 20:16
 *  @Aware
 *
 *  Demand:
 *  使用选择排序找出数组中的最大值
 *  */
#include <stdio.h>

int Find_Max(int *ar, int n);

int main (void){

  int ar[10] = {1, 3, 2, 5, 10, 13, 16, 14, 25, 20};

  printf(" the Max number is %d\n", Find_Max(ar, 10));
  return 0;
}

int Find_Max(int *ar, int n){
  int max;

  max = ar[0];
  for (int i = 0; i < n; i++){
    for (int j = i+1; max < ar[j]; j++){
      max = ar[j];
    }
  }

  return max;
}
