// 14-6-funds2.c
// 结构体指针作为函数传参
//
#include <stdio.h>

#define FUNDLEN 50

struct funds {

  char bank [FUNDLEN];
  char save [FUNDLEN];
  double bankfund;
  double savefund;
};

double sum (const struct funds*);


int main (void){

  struct funds stan = {

    "Garlic-Melon Bank",
    "Lucky's Savings and Loan",
    4032.27,
    8543.94
  };

  printf("Stan has a total of $%.2f.\n",
          sum (&stan));

  return 0;
}

double sum (const struct funds *money){


  return (money->bankfund+money->savefund);
}
