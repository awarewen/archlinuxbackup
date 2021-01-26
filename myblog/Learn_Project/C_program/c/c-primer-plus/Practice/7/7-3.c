// 7-3.c
// 读取整数直到用户输入0
// 报告用户输入的偶数个数(0除外), 这些偶数的平均值
// 输入的奇数个数，及其平均值
//

#include <stdio.h>

#define STOP 0

int main (void){

  int even_count, odd_count;
  int input, sum_even, sum_odd;
  even_count = 0;
  odd_count = 0;
  sum_even = 0;
  sum_odd = 0;

  while ( scanf ("%d", &input) && input != 0){

    if (input % 2 == 0) {
      even_count++;//偶数计数
      sum_even += input; //累加偶数
    }else{

      odd_count++;//奇数计数
      sum_odd += input; //累加计数
    }
  }

  printf("even number has %d, and average is %d \n", even_count, sum_even/even_count);
  printf("odd number has %d and average is %d \n", odd_count, sum_odd/odd_count);

  return 0;
}
