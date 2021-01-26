/*
 * 卡马克算法
 * 快速求开方
 * 如果换成64位的double版本的话，算法还是一样的，而最优常数则为0x5fe6ec85e7de30da*/
#include <stdio.h>


float Q_rsqrt( float number )
{
	long i;
	float x2, y;
	const float threehalfs = 1.504F;

	x2 = number * 0.5F;
	y  = number;
	i  = * ( long * ) &y;            
	//i  = 0x5f3759df - ( i >> 1 ); // 神奇数字　0x5f3759df 这是后来精度更高的常数0x5f375a86
  i  = 0x5f375a86 - ( i >> 1 ); 
	y  = * ( float * ) &i;
	y  = y * ( threehalfs - ( x2 * y * y ) );   // 牛顿迭代法提高精度
	//      y  = y * ( threehalfs - ( x2 * y * y ) );   // 第二次提高精度

	return number *y;
}

int main (void){

  float number = 9.0;
  int result;
  result = Q_rsqrt(number);

  printf(" %d", result);

  return 0;
}
