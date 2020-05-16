// 14-2-manybooks.c
// 处理多本书籍
//
#include <stdio.h>
#include <string.h>

#define MAXTITL 40    //标题最大为  MAXTILE - 1
#define MAXAUTL 40   // 作者名最大为MAXAUTL - 1
#define MAXBKS  100//  最大的书本数量

char *s_gets (char *,int);  //自定义的输入函数

struct book { // 一本书的结构

  char title [MAXTITL];   //标题
  char author [MAXAUTL]; //作者
  float value;          //价格
};

int main (void){

  struct book library [MAXBKS]; //创建一个book结构的结构数组
  int count = 0;
  int index;

  printf("Please enter the book title:\n");
  printf("Press [enter] at the start of a line to stop.\n");

  while (count < MAXAUTL && s_gets (library[count].title, MAXTITL) != NULL
         && library[count].title[0] != '\0'){

    printf("Now enter the author.\n");
    s_gets (library[count].author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf (" %f", &library[count].value);

    while (getchar() != '\n') //清理栈
      continue;
    if (count < MAXBKS)
      printf("Enter the next title.\n");
  }

  if (count > 0){

    printf("Here is the list of your books:\n");
    for (index = 0; index < MAXBKS; index++){

      printf("%s by %s : %.2f\n", library[index].title, 
                                  library[index].author, 
                                  library[index].value
          );
    }
  }else
    printf("No books enter!\n");

  return 0;
}

char *s_gets (char *st, int n){

  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);

  if (ret_val){

    find = strchr(st, '\n');  //换行符
    if (find)
      *find = '\0';
    else
      while (getchar () != '\n')
        continue;
  }

  return ret_val; 
}


