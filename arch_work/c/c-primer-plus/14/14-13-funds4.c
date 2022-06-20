// 14-13-funds4.c
// 传递结构数组
//
#include <stdio.h>
#define FUNDLEN 50
#define N 2

struct funds {

  char bank [FUNDLEN];
  char save [FUNDLEN];
  double bankfund;
  double savefund;
};

double sum (const struct funds money [], int n);//传递结构数组

int main (void){

  struct funds jones[N] = {
    {

      "Garlic-Melon Bank",
      "Lucky's Savings and Loan",
      4032.27,
      8543.94
    },{

      "Honest Jack's Bank",
      "Party Time Savings",
      3620.88,
      3802.91
    }
  };

  printf("The Joneses have a total of $%.2f.\n", sum (jones, N));

  return 0;
}

double sum (const struct funds money [], int n){

  double total;
  int i;

  for (i = 0, total = 0; i < n; i++){

    total += money[i].bankfund + money[i].savefund;
  }
  return (total);
}
