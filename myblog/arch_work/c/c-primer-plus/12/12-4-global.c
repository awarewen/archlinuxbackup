// 12-4-global.c
// 使用外部变量
//
#include <stdio.h>

int units = 0; //　外部变量
void critic(void);

int main (void){

  extern int units;  //再次声明

  printf("How many pounds to a firkin of butter?\n");
  scanf (" %d", &units);
  while (units != 56)
    critic();

  printf("You must have looked it up!\n");

  return 0;
}

void critic (void) {

  //不进行重复声明外部变量
  //
  printf("No luck, my friend, Try again.\n");
  scanf (" %d", &units);
}

