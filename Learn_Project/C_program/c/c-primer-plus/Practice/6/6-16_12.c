// 6-16_12.c
//
#include <stdio.h>

int main (void){

  float input;
  float sum1, sum2;

  printf("Enter limit: ");
  while ( scanf (" %f", &input) == 1 && input > 0){
    sum1 = 0.0;
    sum2 = 0.0;

    for (long i = 1; i <= input; i++){ 
      
      // 1.0 + 1.0/2.0 + 1.0/3.0 ...
      sum1 += 1.0/i;
      // 1.0 - 1.0/2.0 + 1.0/3.0 ...
      if ((i - (i/2)*2) == 0)//求模偶数
      sum2 -= 1.0/i;
      else            //奇数
        sum2 += 1.0/i;
    }
    printf("sum1 = %.1f, sum2 = %.1f \n", sum1, sum2);

    while (getchar () != '\n') continue;

    printf("Enter next(<=0 quit): ");
  }

  printf("\nDone!\n");

  return 0;
}
