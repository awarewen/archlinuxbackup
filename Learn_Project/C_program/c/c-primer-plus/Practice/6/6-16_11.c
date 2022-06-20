// 6-16_11.c
// 在数组中读入8个整数 并倒序打印数组
//
#include <stdio.h>

#define LEN 8

int main (void){

  int ar[LEN];

  for (int i = 0; i < LEN; i++){

    scanf (" %d", &ar[i]);
  }

  for (int i = LEN-1; i >= 0; i--)
    printf("%d", ar[i]);


  return 0;
}
