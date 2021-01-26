// 练习一： 通过实验（编写带有此类问题的程序）观察系统
// 如何处理整数溢出，浮点数上溢和浮点数下溢的情况
#include <stdio.h>
#include <limits.h> //该文件中定义了整数类型的范围
#include <float.h> //该文件中定义了浮点数类型能表示的范围

int main (void){

	int i_int = INT_MAX; //int MAX最大范围
	float f_float = FLT_MAX;// FLOAT MAX最大范围

	printf("int size: %zd,	|float size: %zd \n", sizeof(int), sizeof(float));
  printf("int MAX        %d, float MAX           %f\n", INT_MAX, FLT_MAX);
	printf("---------------------------\n");
	//printf("Enter int and float:\n");
	//scanf("%d %f", &i_int, &f_float);

	printf("\n--INT MAX:     %d | --FLOAT MAX :      %f \n", i_int, f_float);
	printf("\n--INT MAX + 1: %d | --FLOAT MAX + 1.0: %f \n", i_int + 1, f_float + 1.0);//溢出行
  //本机溢出行没有输出

	return 0;


}
