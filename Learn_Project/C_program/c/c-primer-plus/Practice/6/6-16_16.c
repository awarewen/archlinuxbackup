// 6-16_16.c
// Daphne 以%10的单利息投资了100美元(每年投资获利原始投资的%10)
// deirdre 以%5的复合利息投资了100美元(利息是当前余额的%5,包含之前的利息
// 计算deirdre 需要多少年投资额才能超过Daphne，并显示两人的投资额
//
#include <stdio.h>

#define INVERTMENT 100

int main (void){

  int daphne = INVERTMENT;
  int deirdre = INVERTMENT;
  int year = 0;

  for (year = 0; deirdre <= daphne; year++){

    daphne += INVERTMENT * 0.1; //原始投资的%10
    deirdre += deirdre * 0.05;//当前余额%5加上之前的利息
  }

  printf("deirdre need %d year passing daphne.\n", year);
  printf("daphne : %d, deirdre : %d.\n", daphne, deirdre);

  return 0;
}
