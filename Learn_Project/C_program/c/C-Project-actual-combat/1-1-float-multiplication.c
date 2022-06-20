// 1-4-float-multiplication
// 浮点数乘法
//
#include <stdio.h>

int main (void){

  float fvalue1, fvalue2;

  scanf (" %f %f", &fvalue1, &fvalue2);

  printf("%f *%f= %.2f\n",
        fvalue1,fvalue2, fvalue1 * fvalue2);

  return 0;
}
