// 练习一： 通过实验（编写带有此类问题的程序）观察系统
// 如何处理整数溢出，浮点数上溢和浮点数下溢的情况
#include <stdio.h>

int main (void){



	int i_int;
	float f_float;

	printf("int size: %zd,	|float size: %zd \n", sizeof(int), sizeof(float));
	printf("---------------------------\n");
	printf("Enter int and float:\n");

	scanf("%d %f", &i_int, &f_float);

	printf("\n--i_int num: %d | --f_float num: %f \n", i_int, f_float);

	return 0;


}
