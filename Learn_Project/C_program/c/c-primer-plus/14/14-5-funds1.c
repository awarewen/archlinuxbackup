// 14-5-funds1.c
//

#include <stdio.h>

#define FUNDLEN 50

struct funds {

  char  bank [FUNDLEN];
  char  save [FUNDLEN];
  double bankfund;
  double savefund;
};

double sum (double, double);

int main (void){

  struct funds stan = {

    "Garlic-Melon Bank",
    "Lucky's Savings and Loan",
    4032.27,
    8543.94
  };

  printf("Stan has a total of $%.2f.\n", //直接将结构体成员传递给函数
           sum (stan.bankfund, stan.savefund));

  return 0;
}

double sum (double x, double y){

  return (x+y);
}
