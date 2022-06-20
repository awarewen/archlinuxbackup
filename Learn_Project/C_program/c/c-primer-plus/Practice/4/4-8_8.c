// 4-8_8.c
//
// 提示用户输入旅行里程，消耗的汽油量，
// 1. 计算出每加仑汽油能够行驶的英里数,显示小数点后1位
//
// 2. 把单位英里/加仑转换为升/100公里(欧洲通用燃气消耗表示法),显示结果，保留一位小数
// 1加仑=3.785升，1英里=1.609千里，
//
#include <stdio.h>

#define ONE_GL 3.785
#define ONE_ML 1.609

int main (void){

  float travle_mile = 1000.4, use_petrol= 10.4;

  printf("please enter trevle mileage and used gas : ");
  //scanf (" %f %f", &travle_mile, &use_petrol);
  printf("%.1f miles to gallon.\n", travle_mile/use_petrol);

  travle_mile *= ONE_ML;
  use_petrol *= ONE_GL;

  printf("%.1f/100KM \n", travle_mile/use_petrol);

  return 0;
}
