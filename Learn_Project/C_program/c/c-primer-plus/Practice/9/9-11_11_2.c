/*  
 *  2020-07-06 14:34
 *  @Aware
 *  
 *  Demand:
 *  用递归打印50以内Fibonacci数*/
#include <stdio.h>

int Fibonacci(int num);

int main (void){

  int input = 30;

  for (int i = 0; i < input; i ++){
    putc(i%5==0?'\n':' ', stdout);
    printf("%d ", Fibonacci(i));
  }

  return 0;
}

int Fibonacci(int num){

  if (num < 2){
    return num==0?0:1;
  }
  return Fibonacci(num -1)+ Fibonacci(num -2);
}
