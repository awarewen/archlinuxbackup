/*
 * 二分开根*/
#include <stdio.h>

//二分法 
double sqrt1(double x){

  float low,up,mid,eps = 0.001; 
	low=0,up=(x<1.0?1.0:x); 
	mid=(low+up)/2; 
	do
	{
		if(mid*mid>x) up=mid; 
		else          low=mid;
		mid=(up+low)/2; 
	}while((up - low)> eps);

	return mid;
}

int main (void){

  double x = 9.0;
  printf("%f\n", sqrt1(x));

return 0;
}
