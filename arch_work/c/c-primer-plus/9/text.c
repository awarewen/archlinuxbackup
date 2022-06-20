// 
#include <stdio.h>

int main (void){

  int a = 9, b = 5, c = 6;
  /*if (a > b && a > c)
    putchar('a');
  else if (b > a && b > c)
    putchar('b');
  else
    putchar('c');
    */
  a > b && a > c ? 
    putchar ('a') : b > a && b > c ?
      putchar ('b') : putchar ('c');

  return 0;
}
