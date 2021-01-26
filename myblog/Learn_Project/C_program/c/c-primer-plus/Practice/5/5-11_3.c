// 5-11_3.c
// 提示用户输入天数
// 然后将其装换为周数和天数
// 通过while让程序循环使用，当用户输入一个非正值时退出
//
#include <stdio.h>

#define WEEK 7

int main (void){

  int input, day;

  printf("Please days (<=0 to quit): \n");
  while ( scanf (" %d", &input) == 1 && input > 0){

    day = input % WEEK;

    printf("%d days has %d week and %d days\n", input, input/WEEK, day);

    while ( getchar () != '\n')
      continue;

    printf("Enter the next (<=0 to quit): ");
  }

  printf("Bye!");

  return 0;
}
