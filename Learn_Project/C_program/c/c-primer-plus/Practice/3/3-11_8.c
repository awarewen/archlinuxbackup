// 3-11_8.c
// 在美国一品脱等于两杯，1杯等于8盎司，1盎司等于2大汤勺，一大汤勺等于三茶勺
// 编写一个程序提示用户输入杯数，并以品脱，盎司，汤勺，茶勺为单位显示等价容量
//
#include <stdio.h>

#define PINT_CONVERT_GLASS 2 //转换为品脱
#define GLASS_CONVERT_OUNCE 8 //盎司
#define OUNCE_CONVERT_BSoupLadle 2//大汤勺
#define BSoupLadle_CONVERT_TEASPOON 3//茶勺

int main (void){

  float input = 0;
  printf("Please enter : ");
  scanf (" %f", &input);
  printf("%-10s |%-10s |%-10s |%-10s |%-10s\n", "pint", "glass", "ounce", "BSoupLadle", "teaspoon");
  printf("%-10.2f |%-10.2f |%-10.2f |%-10.2f |%-10.2f\n",
          input, input*PINT_CONVERT_GLASS,
                 input*PINT_CONVERT_GLASS*GLASS_CONVERT_OUNCE,
                 input*PINT_CONVERT_GLASS*GLASS_CONVERT_OUNCE*OUNCE_CONVERT_BSoupLadle,
                 input*PINT_CONVERT_GLASS*GLASS_CONVERT_OUNCE*OUNCE_CONVERT_BSoupLadle*BSoupLadle_CONVERT_TEASPOON
                 );

  return 0;
}
