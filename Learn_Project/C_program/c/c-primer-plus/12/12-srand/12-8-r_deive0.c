// 12-8-r_deive0.c
// 伪随机数函数rand0模块的测试驱动
//
#include <stdio.h>

extern unsigned int rand0 (void);

int main (void){

  int count;
   
  for (count = 0; count < 5; count ++)
    printf("%d\n", rand0 ());

  return 0;
}
