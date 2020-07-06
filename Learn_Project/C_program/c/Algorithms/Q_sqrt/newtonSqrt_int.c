/*  
 *  牛顿法迭代开方*/
#include <stdio.h>
int IntSqrt_Init(float f)
{
	__uint32_t ret;
	__uint32_t data = *(__uint32_t *)&f;
	const int exp = ((data >> 23) & (0x0ff)) - 127;
	const int tail = data & ((1 << 23) - 1);
	ret = (((exp >> 1) + 127) << 23) | (tail >> 1);
	ret =  *(float *)&ret;
	if(exp & 0x01)
		ret += ret >> 1;
	return ret;
}

unsigned Int_Sqrt(unsigned y)
{
    unsigned x[2];
    if(y <= 1)
      return y;
    x[0] = IntSqrt_Init(y);
    x[1] = x[0] + (x[0] >> 1);
    while(x[0] != x[1])
    {
        x[1] = x[0];
        x[0] = (y / x[0] + x[0]) >> 1;
    }
    return x[0];
}

int main (void){

  printf("%d", Int_Sqrt(25));

  return 0;
}
