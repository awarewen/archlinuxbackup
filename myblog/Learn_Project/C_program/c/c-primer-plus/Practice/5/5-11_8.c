// 5-11_8.c
// 输入两个数, 第1个数对第2个数求模
// 循环输入第二个对象,保持第一个数不变
//
#include <stdio.h>

int main (void){

  int first, last;

  printf("This program conputes moduli.");
  printf("Enter an integer to serve as the second operand (0/q to quit): ");
  while ( scanf (" %d", &first) == 1 && first != 0){

    printf("Now enter the number: ");
    while (scanf (" %d", &last) == 1){

      printf(" %d %% %d is %d \n", last , first, last%first);
      printf("Now enter the next number(q to change moduli)");

    }
    printf("Enter the next inter to save as the second operand(0/q to quit): ");
      while ( getchar () != '\n')
        continue;

  }

  return 0;
}
