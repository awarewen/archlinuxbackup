// 这里是主函数
// - 主要讲解多文件的关系
// - 每一个以.c结尾的源文件都被称为“翻译单元”
// - 当把代码文件分成多个时，只能有且只有一个main函数
//

/*
 * 头文件
 * @ call_fun.h ：调用其他文件中的函数
 * */
#include <stdio.h>
// 这里include 你的其他需要的文件/翻译单元
#include "call_fun.h"
//

/*
 * 在main中定义的宏替换
 *
 * */
#define IN_MAIN "this is main file!"
//

//声明了一个具 有外部链接 的 文件作用域 函数
void fun_in_main (void);
//---

void main_print (void);

int main (void){

  printf("这里首先调用在main中声明函数\n");
  fun_in_main();

  // 调用source1中的函数
  printf("main 中调用 source1 fun_in_source1 函数\n");
  fun_in_source1();                                                   // fun_in_source1
  printf("main——file中调用 source1的外部变量strs: \n");
  printf("main 调用 具有外部文件作用域的strs：%s", strs);             //strs 
  //printf("main 调用 在source1 声明的内部私有的变量：%s", strs2);//strs2

  //调用source2中的函数
  printf("main 中调用source2中的函数\n");

  fun_in_source2 ();

  printf ("至此 所有调用结束\n");

  return 0;
}

void fun_in_main (void){

  printf("fun_in_main 函数是main里面的\n");
}
