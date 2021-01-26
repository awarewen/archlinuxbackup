/*  
 *  2020-06-30 00:10
 *  @Aware
 *
 *  Demand:
 *  编写一个函数
 *  返回一个数的整数次幂
 *  如果用户输入一个数的0次幂,任何数的0次幂都为1
 *  报告并处理0的0次幂为1*/
#include <stdio.h>

/*  
 *  计算一个数的整数次幂
 *  @num  :求幂的数值
 *  @index:指数
 *  返回结果*/
double CalculationPow(double *num, int *index);


int main (void){

  /*  
   *  @index:指数*/
  double input = 0, ret;
  int index = 0;

  printf("Enter a number and the positive integer power to which \n");
  printf("the number will be raised. enter q to quit!");

  while ( scanf (" %lf %d", &input, &index) == 2){

    ret = CalculationPow(&input, &index);
    printf (" %.2f^%d is : %.5g\n", input, index, ret);
    printf("Enter next pair of number or q to quit.\n");
  }
  printf("Bye!\n");

  return 0;
}

double CalculationPow(double *input, int *index){

  double ret = 1.0;
  if (*index==0){
    return 1;
  }else if (*input == 0 && *index == 0){
    printf("you have enter 0 to the power 0!\n");
    return 1;
  }else {
    for (int i = 0; i < *index; i++){
      
      ret *= *input;
    }

    return ret;
  }
}
