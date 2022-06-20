// bottles.c -- 
// 
#include <stdio.h>
#define MAX 100

int main(void){


  int count = MAX + 1;

  while (--count > 0){


    printf("%d bootles of spring water on the wall,"
        "%d bottles of spring water on the wall! \n",
        count, count);
    printf("Take one down and pass it around, \n");
    printf("%d bottles of spting water!\n\n", count - 1);
  }

  return 0;
}

