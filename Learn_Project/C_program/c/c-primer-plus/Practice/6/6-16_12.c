// 6-16_12.c
//
/*
 * 伪代码
 * main{
 * sum1, sum2;   //存储总值
 * scanf(input) //输入需要的次数
 *
 * for ( i < input) //循环到n次
 * {  序列１的总值: 1+1/2+1/3..1/n
 *    sum1 +=1/i;
 *    序列2的总值: 1-1/2+1/3-1/4..1/n
 *    当n为偶数时减去,当n为奇数时加上
 *    if (i%2 == 0)偶数时
 *    sum2 -=1.0/i;
 *    else 奇数时
 *    sum2 +=1.0/i;
 * }
 *}
 * */
#include <stdio.h>

int main (void){

  float input;
  float sum1, sum2;

  printf("Enter limit: ");
  while ( scanf (" %f", &input) == 1 && input > 0){
    sum1 = 0.0;
    sum2 = 0.0;

    for (long i = 1; i <= input; i++){ 
      
      // 1.0 + 1.0/2.0 + 1.0/3.0 ...
      sum1 += 1.0/i;
      // 1.0 - 1.0/2.0 + 1.0/3.0 ...
      if ((i - (i/2)*2) == 0)//求模偶数
      sum2 -= 1.0/i;
      else            //奇数
        sum2 += 1.0/i;
    }
    printf("sum1 = %.1f, sum2 = %.1f \n", sum1, sum2);

    while (getchar () != '\n') continue;//为下一次输入做准备

    printf("Enter next(<=0 quit): ");
  }

  printf("\nDone!\n");

  return 0;
}
