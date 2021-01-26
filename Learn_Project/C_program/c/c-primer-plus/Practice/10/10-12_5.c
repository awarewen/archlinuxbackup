/*  
 *  2020-07-06 20:40
 *  @Aware
 *
 *  Demand:
 *  找出数组中最大和最小值返回他们的差值*/
#include <stdio.h>

int Ret_Difference(int *ar, int len);

int main(void){
  int ar[5] = {17, 20, 40, 13, 15};

  printf("%d is the difference between the max and min number in ar \n", Ret_Difference(ar, 5));
  return 0;
}

int Ret_Difference(int *ar, int len){

  int max, min, diff;

  min = max = *ar;
  for (int i = 0; i < len; i ++){

    for (int j = i +1; j < len && max < ar[j]; j++){
      max = ar[j];
    }
    for (int k = i +1; k < len && min > ar[k]; k++){
      min = ar[k];
    }
  }

  diff = max - min;

  return diff;
}
