/*  
 *  2020-07-06 20:32
 *  @Aware
 *
 *  Demand:
 *  在函数中返回数组最大值的下标*/
#include <stdio.h>

int Ret_Max(int *ar, int len);

int main (void){

  int ar [5] = {1, 5, 4, 10, 7};
  int ret = Ret_Max(ar, 5);
  printf("ar[%d] is the max number: %d", ret, ar[ret]);
  return 0;
}

int Ret_Max(int *ar, int len){
  int max, pos;

  max = *ar;
  for (int i = 0; i < len; i ++){

    for (int j = i + 1; j < len && max < ar[j]; j++){
      max = ar[j];
      pos = j;
    }
  }

  return pos;
}
