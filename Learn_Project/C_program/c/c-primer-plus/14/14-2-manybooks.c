// 14-2-manybooks.c
// 处理多本书籍
//
// 利用结构数组
// 结构：
// title,author,value
//
// 处理流程：
// 循环表单询问用户输入:title,author,value
// 打印所有的书本信息

#include <stdio.h>
#include <string.h>

#define MAXTITL 41
#define MAXAUTL 31
#define MAXBKS  10 //设置最大的处理能力

struct book {

  char title [MAXTITL];
  char author[MAXAUTL];
  float value;
};

char *s_gets (char *, int);

int main (void){

  struct book library[MAXBKS];
  int count = 0;    //计数
  int index;

  printf("Please enter title(empty line to quit):\n");//询问用户输入书本

  // 用户输入
  while (count < MAXBKS && s_gets (library[count].title, MAXTITL) != NULL &&
         library[count].title[0] != '\0') {//限制最多10本书，输入不为空，并且不以\0开头
  
    puts ("Now enter the author:");
    s_gets (library[count].author, MAXAUTL);
    puts ("Now enter the value");
    scanf (" %f", &library[count++].value);

    while (getchar ()!= '\n')//处理多余的输入
      continue;

    if (count < MAXBKS)//询问用户是否继续输入
    puts ("Please the next title (empty line to quit):");

   }

    //打印书本信息
    if (count > 0){

      printf("Here is the list of your books:\n");
      for (index = 0; index < count; index ++)
        printf("%s by %s: is $%.2f \n", 
            library[index].title, library[index].author, library[index].value);
    }
    else
      printf("NO books!");

  return 0;
}


char *s_gets (char *st, int n){

  char *ret_val;
  char *find;

  ret_val = fgets (st, n, stdin);

  if (ret_val){

    find = strchr (st, '\n');
    if (*find)
      *find = '\0';
    else 
      while (getchar () != '\n')
        continue;
  }

  return ret_val;
}

