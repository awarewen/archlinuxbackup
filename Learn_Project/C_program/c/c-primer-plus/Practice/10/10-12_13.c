/*  
 *  2020-07-12
 *  @Aware
 *
 *  Demand:
 *  提示用户输入3组数据
 *  每组数据包含5个double类型数据
 *
 *  将输入保存到3*5的数组中
 *  计算每组数据的平均值
 *  计算所有数据的平均值
 *  找出最大值
 *  */
#include <stdio.h>
#define ROW 3
#define CLN 5

int main (void){

  double in[ROW][CLN]={0};

  printf("输入三组数：\n");//Enter start
    int i, j;
    for (i = 0; i < ROW; i++){
      for (j = 0; j < CLN; j++){
        fscanf(stdin," %lf", &in[i][j]);
      }
    }//Enter over

  double subtot, max;
  for (i = 0; i < ROW; i++){  //遍历元素
    max = *(*(in+i));       //每行的第一个元素的值
     for (j = 0, subtot = 0; j < CLN; j++){
      subtot += in[i][j];  //累加
      printf("%.2lf ", in[i][j]);
      if (max < in[i][j]) max = in[i][j]; //找出最大值
    }
    printf(" Avg is : %.2lf \n", subtot/CLN);
  }
printf("The max is : %.2lf", max);
  return 0;
}
