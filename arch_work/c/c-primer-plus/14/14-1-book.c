// 14-1-book.c
// 创建一个图书的目录
//
#include <stdio.h>
#include <string.h>
/*  */
#define MAXTITL 41   //书名长度
#define MAXAUTL 31  // 作者姓名最大长度

char * s_gets (char * st, int n);

/* 结构体模板 */
struct book { //book为此结构体的标记

  char title [MAXTITL];
  char author[MAXAUTL];
  float value;
};
/* 结构体模板结束*/

int main (void){

  struct book library; //声明一个book类型的结构体变量

  //
  printf("Please enter the book title.\n");
  s_gets (library.title, MAXTITL);
  ///输入书本标题

  //
  printf("Now enter the author.\n");
  s_gets (library.author, MAXAUTL);
  ///

  //
  printf("Now enter the value.\n");
  scanf ("%f", &library.value);
  ///
  
  printf("%s by \"%s\" ($%.2f)\n", library.title,
      library.author, library.value);
  printf("%s: \"%s\" ($%.2f)\n", library.author,
      library.title, library.value);

  printf("Done.\n");

  return 0;
}

/* 自定义函数s_gets */

char * s_gets (char *st, int n){

  char * ret_val;
  char * find;

  ret_val = fgets(st, n, stdin);
  if (ret_val){

    find = strchr(st, '\n');
    if (find)
      *find = '\0';
    else
      while (getchar() != '\n') 
        continue;
  }

  return ret_val;
}

