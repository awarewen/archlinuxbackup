// source2.c

#include <stdio.h>
#include "call_fun.h"

void fun_in_source2 (void){

  printf("This is source2 file \n");
  printf("hello word!\n");
  printf("在source2 中调用 source3中的 fun_in_source1 函数\n");
  //这里调用了source1中的函数
  fun_in_source1 ();
  printf("source2 end \n");

}
