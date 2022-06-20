/*  
 *  牛顿迭代开方*/
#include <stdio.h>

float SqrtByNewton(float x);

int main (void){


  printf("%f", SqrtByNewton(25.0));
  return 0;
}

float SqrtByNewton(float x){

  float val = x;
  float last;
  float eps = 0.5f;//要求精度

  do{
    last = val;
    val = (val + x/val)/2;
  }while (fabsf(val - last) > eps);

  return val;
}
