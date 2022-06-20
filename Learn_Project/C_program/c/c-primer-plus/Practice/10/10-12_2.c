/*  
 * 2020-07-06 18:36
 * @Aware
 *
 * Demand:
 * 初始化一个double类型的数组
 * 将该数组内容拷贝至其他３个数组中
 * */
#include <stdio.h>

#define LEN 5
void copy(int [], int ar2[LEN], int n);

void copy_ptr(int *ar, int *ar3, int n);

void copy_ptrs(int *ar1, int *ar4, int *n);

int main (void){

  int ar1[LEN] = {1, 3, 5, 7, 9};
  int ar2[LEN] = {0};
  int ar3[LEN] = {0};
  int ar4[LEN] = {0};

    printf("ar2[2]: %d\n", ar2[2]);
  /* 数组名拷贝 */
  copy(ar1 , ar2, LEN);
  copy_ptr(ar1, ar3, LEN);
  copy_ptrs(ar1, ar4, ar1+5);

  for (int i =0; i < LEN; i++)
    printf (" source ar1[%d] : %d\n", i, ar1[i]);
    
  for (int i = 0; i < LEN; i ++)
    printf("ar2[%d]: %d\n", i, ar1[i]);

  for (int i = 0; i < LEN; i ++)
    printf("ar3[%d]: %d\n", i, ar3[i]);

  for (int i = 0; i < LEN; i ++)
    printf("ar4[%d]: %d\n", i, ar4[i]);
  return 0;
}

void copy(int ar1[5], int ar2[LEN], int n){

  for (int i = 0; i < n; i++)
    ar2[i] = *ar1++;
}

void copy_ptr(int *ar1, int *ar3, int n){

  for (int i = 0; i < n; i++)
    ar3[i] = *ar1++;
}

void copy_ptrs(int *ar1, int *ar4, int *n){

  for (int i = 0; ar1 != n; i++)
    ar4[i] = *ar1++;
}
