//test.c
//
#include <stdio.h>
int * text (void);

int main (void){

  int *bpr;
  bpr = text();
  printf("back = %d \n", *bpr);
  *bpr = *bpr + 2;
  printf("new bpr = %d\n", *bpr);

  return 0;
}


int * text (void){

  static int b = 2;

  return &b;
}
