/*  
 *  2020-07-06
 *  @Aware
 *
 *  Demand:
 *  初始化一个二维数组, 并将其拷贝到另一个数组中去
 *  */
#include <stdio.h>
#define LEN 2

void Copy(int **ar, int ar2[][LEN], int len);

int main (void){
  int ar[LEN][LEN]={{2,3},{4,5}};
  int ar2[LEN][LEN];

  Copy((int **)ar, ar2, LEN);

  int *p=&ar2[0][0];
  for (int i =0; i < LEN*2; i++)
    printf("%d \n", *p+i);

  for (int i = 0; i < LEN; i++){
    for (int j = 0; j < LEN; j++){
      printf("ar2[%d][%d]=%p ar[%d][%d] = %p\n", i,j,&ar2[i][j],i,j,((int *)ar+i*LEN+j));
    }
  }
  return 0;
}

void Copy(int **ar, int ar2[][LEN], int len){

  for (int i = 0; i < len; i++){
    for (int j = 0; j < len; j++){
      ar2[i][j] = *((int *)ar + i*len+j);
      printf("ar2[%d][%d]=%p ar[%d][%d] = %p\n", i,j,&ar2[i][j],i,j,((int *)ar+i*len+j));
    }
  }

}
