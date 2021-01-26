// 3-11-6.c
// 一个水分子质量约为3.0×10^-23克, 一夸脱水大概是950克
// 编写一个程序提示用户输入水的夸脱数，并显示水分子的数量
//
#include <stdio.h>

#define ONE_QUART_WATER 950
#define ONE_WATER_MOLECULE 3.0e-23

int main (void){

  int quart_water = 0;
  printf("Please enter quart of water: ");
  scanf (" %d", &quart_water);

  printf("%d quart water have %.2e water molecule.\n", quart_water, 
          (quart_water * ONE_QUART_WATER)/ONE_WATER_MOLECULE);

  return 0;
}
