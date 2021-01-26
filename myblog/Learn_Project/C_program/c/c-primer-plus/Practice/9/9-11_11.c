/*  
 *  2020-07-04 00:05
 *  @Aware
 *
 *  Demand:
 *  使用循环计算Fibonacci数
 *
 *  裴波那契数列
 *  i>2
 *  i+1 = (i+1)-1 + (i+1)-2*/
#include <stdio.h>
#define LEN 40

//void Pibonacci(int prev, int beforePrev);
void Pibonacci(int num);

int main (void){

  int begin;
  /*
   * 输入一个起始值*/
  //scanf (" %d", &begin);
  begin = 10;
  Pibonacci(begin);
   return 0;
}

void Pibonacci(int num){

  int prev, beforePrev;
  int temp;
  prev = 1, beforePrev = 1;

  if (num < 3){
    printf(" %d %d %d", beforePrev, prev, beforePrev+prev);
  }else
    for (int i = 1; i < num; i++){
      if ( i < 3){
        printf("1 ");
      }else{
        temp = prev+beforePrev;
        printf("%d ", temp);
        beforePrev = prev;
        prev = temp;
      }
    }
}
