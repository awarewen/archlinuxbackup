// cmpflt.c --浮点数比较
#include <math.h>
#include <stdio.h>

int main(void){


  const double ANSWER = 3.14159;
  double reponse;

  printf("What is the value of pi?\n");
  scanf(" %lf", &reponse);

  while (fabs(reponse - ANSWER) > 0.0001){
    printf("Try again!\n");
    scanf(" %lf", &reponse);
  }
  printf("Close enogh!\n");

  return 0;
}
