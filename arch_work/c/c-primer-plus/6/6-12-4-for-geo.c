// for-geo.c --递增几何增长
//
#include <stdio.h>
int main(void){


  float num;

  for(num = 100.0; num < 150.0; num = num * 1.1)
    printf("Your debt is now $%.2f\n", num);
  return 0;
}
