/*  
 *  位运算使用牛顿逼近法求开方
 *  */
#include <stdio.h>

float NewtonSqrt(float x);

int main (void){

  printf("%f", NewtonSqrt(9.0));

  return 0;
}

float NewtonSqrt(float x){

  __uint32_t ret;

  __uint32_t data = *(__uint32_t *)&x;
  const int exp = (((data >> 23) & (0x0ff)) -127);
  const int tail = data & ((1 << 23) -1);
  ret = (((exp >> 1) + 127)<<23) | (tail>>1);
  ret = *(float *)&ret;
  if (exp &0x01)
    ret += ret>>1;

  return ret;
}
