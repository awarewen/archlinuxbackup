// boollean.c --Bool类型的变量
//
#include <stdio.h>

int main(void){


  long num = 0L;
  long sum = 0L;
  _Bool input_is_good;

  printf("Please enteran integer to be summed ");
  printf("q to quit \n");

  input_is_good = scanf(" %ld", &sum);

  while (input_is_good){


    sum = sum + num;
    printf("Please enter next integer (q to quit)\n");
    input_is_good = ( scanf(" %ld", &num) == 1);

  }
  printf("Those integers sum to %ld .\n", sum);

}
