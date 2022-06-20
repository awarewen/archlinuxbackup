// 5-11_5.c
// 提示用户输入20个数值
// 计算总和

#include <stdio.h>

#define DAY 20

int main (void){

  int days;

  printf("Enter 20 num:\n");

  for (int i = 0; i < DAY; i++){

    scanf (" %d", &days);
    days += days;
  }

  printf("is %d \n", days);

  return 0;
}
