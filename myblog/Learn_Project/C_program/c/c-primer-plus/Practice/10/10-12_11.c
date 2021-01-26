/*  
 *  2020-07-08
 *  @Aware
 *
 *  Demand:
 *  声明一个3*5的数组并初始化
 *  打印其中的值
 *  然后各翻倍,显示新元素的值
 *
 *  两个函数, 以数组名和数组长度为单位
 *  */
#include <stdio.h>
#define row 3
#define cln 5

void Ar_Dou(int **ar, int len);
void Show(int **ar, int len);

int main (void){
  int ar[row][cln] = {1, 2, 3, 4, 5,
                      2, 3, 4, 5, 6,
                      7, 8, 9, 10, 11};

  Ar_Dou((int **)ar, row*cln);
  Show((int **)ar, row*cln);
  return 0;
}

void Ar_Dou(int **ar, int len){

  for (int i = 0; i < len; i ++)
    *((int *)ar+i) *=2;
}

void Show(int **ar, int len){

  for (int i =0; i < len; i ++)
    printf ("%d ", *((int *)ar+i));
}
