// 9-12-loccheck.c
// 查看变量的地址
//
#include <stdio.h>
void mikado (int);
int main (void){

  int pooh = 2, bah = 5;

  printf("In main (), pooh = %d and &pooh = %p\n", pooh, &pooh);
  printf("In main (), bah = %d and &bah = %p\n", bah, &bah);
  mikado(pooh);

  return 0;
}

void mikado (int bah){

  int pooh = 10;

  printf("in mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
  printf("in mikado(), bah = %d and &bah = %p\n", bah, &bah);
}
