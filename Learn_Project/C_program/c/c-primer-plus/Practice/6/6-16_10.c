// 6-16_10.c
// 要求输入一个上限整数和下限整数
// 计算并显示上下限之间的所有整数平方和
// 直到用户输入的上限整数小于或等于下限整数
//
#include <stdio.h>

int main (void){

  int upper, lower, sum = 0;

  printf("Pease enter the upper and lower limit(upper <= lower to quit): ");

  while (scanf (" %d %d", &upper, &lower) == 2 && lower < upper){

    while (lower <= upper){

      sum += lower*lower;
      lower++;
    }
    printf("in limit sum of square is : %d\n", sum);

    while ( getchar () != '\n')
      continue;

    printf("Pease enter the upper and lower limit(upper <= lower to quit): ");
 }

  printf("\nDone!\n");

  return 0;
}
