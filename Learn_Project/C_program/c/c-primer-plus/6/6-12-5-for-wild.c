// for_wild.c --第三个表达式可用任何合法的表达式
//
#include <stdio.h>

int main(void){

  int x;
  int y = 55;

  for (x = 1; y <= 75; y = (++x * 5) + 50)
    printf("%10d %10d\n", x, y);
  return 0;
}
