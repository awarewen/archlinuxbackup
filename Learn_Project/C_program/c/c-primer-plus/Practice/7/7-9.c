// 7-9.c
// 编写一个程序接受正整数输入
// 然后显示所有小于或等于该数的素数
//
#include <stdio.h>

int main (void){

  int input;
  int bo;

  printf("Please enter a number(> 0): \n");
  scanf (" %d", &input);

  for (; input > 1; input--){
    for (int i = 2; i < input; i ++){

      if (input % i == 0)
        bo++;
    }

    if (!bo){
      if (bo%5 == 0)
      printf("%d | ", input);
    }
    bo = 0;
  }

  return 0; 
}
