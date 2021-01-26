//11-5_p_and_s.c
//指针和字符串
//
#include <stdio.h>

int main (void){

  const char * mesg = "Don't be a fool!";
  const char * copy;

  copy = mesg;

  printf("%s\n", copy);
  printf("mesg = %s; &mesg = %p; vlue = %p\n", mesg, &mesg, mesg);
  printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);
  
  return 0;
}

