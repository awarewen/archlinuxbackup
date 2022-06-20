// add_one.c --递增的前缀和后缀
//
#include <stdio.h>

int main(void){


  int ultra = 0, super = 0;

      printf("super    ultra\n");
  while (super < 5){
      super++;
      ++ultra;
      printf("%-5d%-5d\n", super, ultra);
  }

  return 0;
}
