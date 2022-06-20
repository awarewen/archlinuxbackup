// source1.c
//- 这个翻译单元中不能有main
//- 多文件编译可以称作一个工程
//- 一个工程就是一个程序，一个程序中只能有一个main函数入口
//

//source1 中如果使用了相对应头文件中的函数也需要include
// printf 函数属于stdio.h头文件
#include <stdio.h>
//

//这个变量具有外部链接文件作用域
//对main_file/source1/source2三个翻译单元都可见
//如果需要在其他翻译单元引用这个变量，需要再在那个引用的文件中使用引用声明
//extern char strs[]; 可以不用赋值 因为在souce1中的初始声明已经赋值了
char strs[] = "source1 file";

//这个变量具有内部链接文件作用域
//只对source1 翻译单元可见
static char strs2 [] = "这是一个文件作用域的数组";
/**
 * 用static 限定符修饰的变量
 * 只能在声明的文件中使用*/


void fun_in_source1 (void){

  printf("fun_in_source1 \n");
  printf("Hello %s \n", strs);
  printf("static strs2 %s \n", strs2);
  printf("source1 end\n");

}
