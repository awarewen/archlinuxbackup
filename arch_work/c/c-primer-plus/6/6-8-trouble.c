// trouble.c -- 误用=导致无限循环
//
#include<stdio.h>

int main(void){


  long num;
  long sum = 0L;
  int status;

  printf("Please enter an integer to be summed(q to quit)\n");
  status = scanf(" %ld", &num);

  while (status == 1)
  {


    sum = sum + num;
    printf("please enter next integer\n ");
    status = scanf(" %ld", &num);


  }

  printf("Those integers sun to %ld.\n", sum);

  return 0;

}
