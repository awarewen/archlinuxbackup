//14-7-funds3.c
//传递一个结构
//
#include <stdio.h>

#define FUNDLEN 50 

struct funds {

  char bank [FUNDLEN];
  char save [FUNDLEN];
  double bankfund;
  double savefund;
};

double sum (struct funds);

int main (void){

  struct funds bank = {

    "Garlic-Melon Bank",
    "Lucky's Svaings and loan",
    4023.27,
    8543.94
  };

  printf("Stan has a total of $%.2f.\n",
          sum (bank));

  return 0;
}

double sum (struct funds money){

  return (money.bankfund+money.savefund);
}
