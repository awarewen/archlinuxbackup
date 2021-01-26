// 10-11_sum_arr2.c
// 数组元素之和
//
#include <stdio.h>
#define SIZE 10 

int sump (int * start, int * end);

int main (void){

  int marbles [SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
  long answer;

  answer = sump (marbles, marbles + SIZE); //marbles[0] 数组开始, marbles[0] + 10数组结束

  printf("The total number of marbles is %ld.\n", answer);

  return 0;
}

//指针算法
//
int sump (int * start, int * end){ 

  int total = 0;

  while (start < end){

    total += *start;//*start 表示数组中的值
    start++;        //地址偏移，下一个地址
  }

/* for (int total = 0; start < end; start ++)
 *    total += *start;
  */
  return total;
}
