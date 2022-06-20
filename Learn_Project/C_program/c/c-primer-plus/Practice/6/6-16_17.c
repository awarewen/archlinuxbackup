// 6-16_17.c
// 在账户存入100 0000万， 每年获得%8的年利率
// 然后每年年底取出10 0000万，计算需要多少年取完
//
#include <stdio.h>

#define IN 1000000 // 100万
#define OUT 100000 //10万
#define RATE 0.08 //利率

int main (void){

  int in = IN;
  int year = 1;

  for (; in > 0; year ++){

    in += (in*RATE);
    in -= OUT;
  }
  printf("%d year have %d .\n", year, in);

  return 0;
}
