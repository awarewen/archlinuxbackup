/*  
 *  2020-07-07
 *  @Aware
 *
 *  Demand:
 *  初始化一个3*5的数组,使用一个VAL数组的函数将其拷贝至另一个数组中
 *  用另一个变长数组的函数显示两个数组的内容
 *  */
#include <stdio.h>
#define ROW 3
#define CLN 5

void Copy_N_N(int row, int cln, int inAr[row][cln], int outAr[], int len);

void Show_Ar(int row, int cln, int Ar1[row][cln], int Ar2[], int len);

int main (void){
  int inAr[ROW][CLN] = {
    {1, 2, 3, 4, 5},
    {2, 3, 4, 5, 6},
    {3, 4, 5, 6, 7}
  }, outAr[ROW*CLN] = {0};

  Copy_N_N(ROW, CLN, inAr, outAr, ROW*CLN);

  Show_Ar(ROW, CLN, inAr, outAr, ROW*CLN);

  return 0;
}

void Copy_N_N(int row, int cln, int inAr[row][cln], int outAr[], int len){

  for (int i = 0, k = 0; i < row && k < len; i++)
    for (int j = 0; j < cln; j++, k++)
      *(outAr+k) = inAr[i][j];
}

void Show_Ar(int row, int cln, int Ar1[row][cln], int Ar2[], int len){

  for (int i = 0; i < row; i++)
    for (int j = 0; j < cln; j++)
      printf("ar1[%d][%d] = %d\n", i, j, Ar1[i][j]);

  for (int i = 0; i < len; i++){
    printf ("Ar2[%d] = %d\n", i, Ar2[i]);
  }
}
