// pritnout.c --使用转换说明
//
#include <stdio.h>
#define PI 3.14

int main (void){


  int number = 7;
  float pies = 12.75;
  int cost = 7800;

  printf("Thee %d contestahts ate %f berry pies . \n", number, pies);
  printf("The value of pi is %f.\n", PI);
  printf("Farewell ! thou art too dear for my possessing, \n");
  printf("%c%d\n", '$', 2 * cost);

  return 0;


}
