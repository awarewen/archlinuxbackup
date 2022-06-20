/*  
 *  2020-06-30 00:36
 *  @Aware
 *
 *  Demand:
 *  编写一个递归函数
 *  计算一个数的整数次幂*/
#include <stdio.h>

double RecursionPow(double *input, int *index);

int main (void){

  double input, ret;
  int index= 1;

  printf("Enter a number and the positive integer power to which \n");
  printf("the number will be raised. enter q to quit!");
  while ( scanf (" %lf %d", &input, &index) == 2){
    ret = RecursionPow(&input, &index);
    printf(" %.2f^%d is : %.5g\n", input, index, ret);
    printf("Enter next pair of number or q to quit.\n");
    input = 0.0;
    index = 0;
  }
  printf("Bye!");
  return 0;
}

double RecursionPow (double *input, int *index){
  double ret = *input;
  int ix = *index;
  
  if (*input == 0 && *index == 0){
    printf("you have enter 0 to the power 0!\n");
    return 1;
  }else if (*index == 0){
    return 1;
  }else{
    if (ix > 1){
      ix--;
      ret *=RecursionPow(&ret, &ix);
    }
  }
  return ret;
}
