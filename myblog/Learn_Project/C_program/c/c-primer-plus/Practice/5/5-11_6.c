// 5-11_6.c
// 计算20个数值的平方和
//
#include <stdio.h>

#define NUM 20

int main (void){

  int input, num, all = 0;

  printf("Enter 20 numbers: ");
  scanf (" %d", &num);

  for (int i = 0; i < num ; i++){

    scanf (" %d", &input);
    all += input*input;
  }

  printf(" is %d", all);

  return 0;
}
