// 12-1-hiding.c
// 嵌套块中的变量
//
#include <stdio.h>

int main (void){

  int x = 30; //原始的x

  printf("x in outer block : %d at %p\n", x, &x);
  {

    int x = 77;   //隐藏了外部的x
    printf("x ininner block : %d at %p\n", x, &x);
  }
  printf("x in outer block : %d at %p\n", x, &x);

  while (x ++ < 33) //这里测试的是外部的x
  {

    int x = 100; //隐藏外部的x
    x ++;       //递增块内定义的x
    printf("x in while loop: %d at %p \n", x, &x);
  }
  printf("x in outer block : %d at %p\n", x, &x);

  return 0;
}
