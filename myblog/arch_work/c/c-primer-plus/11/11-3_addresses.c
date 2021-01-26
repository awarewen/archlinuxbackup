//11-3-addresses.c
//字符串地址
//
#include <stdio.h>
#define MSG "I'm special"
int main (void){

  char ar [] = MSG;
  const char * pt = MSG;
  printf("address of \"I'm special\": %p \n", "I'm special");
  printf("            address ar : %p \n", ar);
  printf("            address pt : %p \n", pt);
  printf("         address of MSG: %p \n", MSG);
  printf("address of \"I'm special\" : %p \n", "I'm special");
  printf("ar = %p , ar %p\n", ar, ar+1);

  return 0;
}
