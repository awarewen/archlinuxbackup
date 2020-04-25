//text.c
//
#include <stdio.h>

double ave (double tem [10]);
double smax =0,smin = 0;

int main (void){

  double average;

  double score [10] = {

    1,2,3,4,5,6,7,8,9,10
  };

  average = ave (score);

  printf("average = %f, max = %f, min = %f\n", average, smax, smin);

  return 0;
}


double average (double tem[10]){

  extern double smax,smin;
  int i = 0;
  double sum = 0;
  double avg;

  for (i = 0; i < 10; i++){

    sum += tem[i];    //累加
  }

  avg = sum/10;   //求平均
  for (i = 1; i <= 10; i++){

    if (tem [i - 1] < tem [i])
      smax = tem [i - 1];
    else if (tem [i - 1] > tem [i])
      smin = tem [i];
  }

  return avg;
}
