#include <stdio.h>
#include <stdlib.h>

#define MAX 4

void SequenSearch(int *fp, int Length);
void Search(int *fp, int length);
void Sort(int *fp, int length);

/*  
 *  选择排序,小到大
 *  输入: 数组首地址，数组元素个数*/

void select_sort(int *ar, int len){
  int i,j,min, pos;

  for (i= 0; i < len-1; i++){
    min = ar[i];
    pos = i;
    for (j = i+1; j < len && min > ar[j]; j++){
        min = ar[j];//将ar[i]和ar[i+1]比较
        pos = j;//循环寻找数据中最小或最大
    }
    ar[i] = ar[pos];//将找到的值插入
    ar[pos] = min;
  }
}

/*  
 *  直接插入排序
 *  小到大*/
void insert_sort(int *ar, int len){
  int i, j, temp;

  for (i = 0; i < len; i++){
    temp = ar[i];
    for (j = i-1; j >0 && ar[j]<temp; j--){
      ar[j+1] = ar[j];
    }
    ar[j+1] = temp;
  }
}


/*  
 *  冒泡排序
 *  小到大*/
void Bubble_sort(int *ar, int len){
  int i, j, temp;

  for (i = 0; i < len; i++){
    for (j = 0; j < len-i; j++){
      if (ar[j]>ar[j+1]){
        temp = ar [j];
        ar [j] = ar [j+1];
        ar [j+1] = temp;
      }
    }
  }
}

/*  
 *  希尔直插排序1
 *  小到大*/
void shell_sort1(int *ar, int len){
  int gap, i, j, temp;

  for (gap = len>>1; gap>0; gap>>=1){//每次的比较步长为上一次的一半
    for (i = gap; i < len; i++){ //
      temp = ar[i];
      for (j = i-1; j < len && temp < ar[j]; j--){//
        ar[j+1] = ar[j];
        ar[j] = temp;
      }
    }
  }
}

 /*  
  *  希尔排序
  *  */
void Shell_Sort2(int *ar, int len){
  int i,j,k,temp, gap;

  for (gap = len >> 1; gap > 0; gap >>=1){
    for (i = 0; i < gap; i++){
      for (j = i + gap; j < len; j+=gap){
        temp = ar[j];//记录
        for (k = j-gap; k >= 0; k -= gap){
          ar[k + gap] = ar[k];//数据后移
        }
        ar[k + gap] = temp;
      }
    }
  }
}
