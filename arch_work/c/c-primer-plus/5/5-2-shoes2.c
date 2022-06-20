// shoes2.c -- 用while循环
//
#include <stdio.h>

#define ADJUST 7.31

int main(void){


  const double SCALE = 0.333;
  double shoe, foot;


  printf("Shoe size (men's)  foot length");
  shoe = 3.0;

  while(shoe < 18.5){


    foot = SCALE * shoe + ADJUST;
    printf("%10.1f %15.1f inches\n", shoe, foot);
    shoe = shoe + 1.0;
     }

  printf("If the shoe fits, wear it. \n");



  return 0;
}

