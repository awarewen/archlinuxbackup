/*
 * 牛顿迭代开方2
 * 使用一个特殊的初始值来加快运算*/
#include <stdio.h>

float SqrtByNewton(float x)
{
	int temp = (((*(int *)&x)&0xff7fffff)>>1)+(64<<23);
	float val=*(float*)&temp;
	float last;
  float eps = 0.5f;
	do
	{
		last = val;
		val =(val + x/val) / 2;
	}while(fabsf(val-last) > eps);
	return val;
}

int main (void){

  printf("%.5f",SqrtByNewton(25.0) );

  return 0;
}
