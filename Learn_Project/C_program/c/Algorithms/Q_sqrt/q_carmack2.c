//
// Carmack在QUAKE3中使用的计算平方根的函数
//

#include <stdio.h>

float CarmSqrt(float x){
union{
int intPart;
float floatPart;
} convertor;

union{
int intPart;
float floatPart;
} convertor2;

convertor.floatPart = x;
convertor2.floatPart = x;

convertor.intPart = 0x1FBCF800 + (convertor.intPart >> 1);
convertor2.intPart = 0x5f3759df - (convertor2.intPart >> 1);

return 0.5f*(convertor.floatPart + (x * convertor2.floatPart));
}

int main (void){

  float x;

  x = 9.0; 
  x= CarmSqrt(x);
  printf(" %f", x);
  return 0;
}
