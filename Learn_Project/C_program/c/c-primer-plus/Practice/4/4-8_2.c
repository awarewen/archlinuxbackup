// 4-8-2.c
//编写一个程序，提示输入姓名，并执行下列操作
//打印姓名包括双引号
//在宽度为20的字段右侧打印名字
//在字段宽度的左侧打印名字在比姓名宽3的字段打印名字
//
#include <stdio.h>

int main(void){

  char name[10] = {0};
  
  int BackPrint;

  printf("Please enter your name: ");
  scanf(" %s", name);

  printf("Hello \" %s \"!\n", name);
  printf("\" %20s\"\n", name);
  printf("\"%-20s\"\n", name);
  for (int num = 0; name[num] != 0; num++){
    BackPrint = num;
  }printf("BackPrint is %d\n", BackPrint);
  printf("\"%*s\"\n", BackPrint + 3, name);

  return 0;
}
