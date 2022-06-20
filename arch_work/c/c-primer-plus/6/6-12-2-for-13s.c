// for-13s.c --递增2,10计数器
//
#include <stdio.h>
int main (void){

  int secs;

  for (secs = 2; secs < 60; secs = secs + 13)
    printf("%d\n", secs);
  printf("Done!\n");

  return 0;
}
