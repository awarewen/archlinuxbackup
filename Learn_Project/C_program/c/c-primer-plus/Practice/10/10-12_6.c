/*  
 *  2020-07-06
 *  @Aware
 *
 *  Demand:
 *  将数组中的数据倒序排列输出
 *  */
#include <stdio.h>
#define LEN 11

void Sort(int *ar, int len);

int main (void){
  int ar[LEN] = {2,0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  /* 将数组中的元素倒序 */
  Sort(ar, LEN);
  for (int i = 0; i < LEN; i ++)
    printf("%d ", ar[i]);

  return 0;
}

void Sort(int *ar, int len){

  int temp, n;
  n = (len>>1)+len%2;
  for (int i = 0; i < n; i ++){
    temp = ar[i];
    ar[i] = ar[(len - i)-1];
    ar[(len - i)-1] = temp;
  }
}
