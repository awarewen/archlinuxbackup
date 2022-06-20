// 14-1-book.c
// 一本书的目录
// 流程:
// 用户输入书本标题
// 创建一个输入函数
/*  功能：1. 处理行尾的'\n'换行符 */
/*        2. 处理输入错误 */
// ...
// 输出书本标题和作者以及价格
#include <stdio.h>
#include <string.h>

#define MAXTITL 41
#define MAXAUTL 31

struct book {

  char title [MAXTITL];
  char author[MAXAUTL];
  float value;
};

char *s_gets (char *, int);

int main (void){

  struct book library;
 
  printf("Please enter title:");
  s_gets (library.title,MAXTITL);
  printf("Enter author:\n");
  s_gets (library.author, MAXAUTL);
  printf("Enter the value:\n");
  scanf (" %f", &library.value);

  printf("%s %s, is $%.2f\n",
          library.title, library.author, library.value);
  return 0;
}

char *s_gets (char *st, int n){

  char *ret_val;
  char *find;

  ret_val = fgets (st, n, stdin); //返回一个指针
  if (ret_val){

    find = strchr (st, '\n'); //查找换行符，返回指向换行符的指针
    if (*find)
      *find = '\0'; //将换行符替换为空字符
    else 
      while (getchar () != '\n') //如果没有找到换行符则清空缓冲区
        continue;
  }

  return ret_val;
}
