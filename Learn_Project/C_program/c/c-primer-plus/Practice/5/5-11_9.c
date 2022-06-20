// 5-11_9.c
// 编写一个程序
// 输入华氏温度(double)
// 将其传递给Tmeperaturess()函数
// 函数计算摄氏温度和开氏温度，保留3位小数
// 摄氏温度= 5.0/9.0*(华氏温度 - 32.0)
// 开氏温度= 摄氏温度+273.16
//
#include <stdio.h>

#define CELSIUS 5.0/9.0  //摄氏温度

double Tmeperaturess (const double, const double);

int main (void){

  double input;
  double celsius;

  printf("Enter fahrenheit (q to quit): \n");
  while ( scanf (" %lf", &input) == 1){

    celsius = Tmeperaturess (input, CELSIUS); //计算摄氏温度

    printf("%.2lf fahrenheit : celsius %.2lf, kelvin %.2lf \n", input, celsius, celsius + 273.16);

    printf("Enter next (q to quit)\n");
    while (getchar () != '\n')
      continue;
  }

  printf("Done!\n");

}

double Tmeperaturess (const double input, const double CTL){

  return (input-32.0) * CTL; 
}
