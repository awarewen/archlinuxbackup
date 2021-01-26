//14-14-booksave.c
//在文件中保存结构中的内容
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

char * s_gets (char *st, int n);

struct book { //一本书的结构

  char title[MAXTITL];  //标题
  char author[MAXAUTL];// 作者
  float value;//价格
};

// main start
int main (void){

  struct book library[MAXBKS]; //10本书
  int count = 0;      //计数器
  int index, filecount;
  FILE * pbooks;//文件指针
  int size = sizeof (struct book); //得出book结构的大小

  if ((pbooks = fopen ("book.dat", "a+b")) == NULL){

    fprintf(stderr, "Can't open book.dat file\n");
    exit (1);
  }

  rewind (pbooks); //定位到文件开头
  while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1){

    if (count == 0)
      puts ("Current contents of book.dat:");
    printf("%s by %s: $%.2f\n", library[count].title, library[count].author,library[count].value);
    count ++;
  }

  filecount = count;
  //将添加前的数量和添加后的数量分开
  if (count == MAXBKS){

    fputs ("The book.dat file is full.", stderr);
    exit (2);
  }

  puts ("Please add new book title.");
  puts ("Press [enter] at the start of line to quit");

  while (count < MAXBKS && s_gets (library[count].title, MAXTITL) != NULL 
                        && library[count].title[0] != '\0'){

    puts ("Now enter the author.");
    s_gets (library[count].author, MAXAUTL);
    puts ("Now enter the value.");
    scanf ("%f", &library[count++].value);
    while (getchar () != '\n')  //清理输入行
      continue;
    if (count < MAXBKS)
      puts ("Enter the next title.");
  }

  if (count > 0){

    puts ("Here is the list of your book:");
    for (index = 0; index < count; index ++)
      printf("%s by %s: $%.2f\n", 
              library[index].title, library[index].author, library[index].value);
    fwrite (&library[filecount], size, count - filecount, pbooks);
    //count - filecount 表示添加了几本书,并将添加的书写入
  }
  else 
    puts ("No books!!\n");

  puts ("Bye!\n");
  fclose (pbooks);

  return 0;
}

char *s_gets (char *st, int n){
  
  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);

  if (ret_val){

    find = strchr (st, '\n');
    if (find)
      *find = '\0';
    else 
      while (getchar () != '\n')
        continue;
  }
    return ret_val;
}
