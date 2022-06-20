// 8-3-file_eof.c
//打开一个文件并显示该文件
//
#include <stdio.h>
#include <stdlib.h>     //包含了 exit()函数
int main (void){

  int ch;
  FILE * fp;

  char fname[50];

  printf("Enter the name of the file: ");

  scanf (" %s", fname);

  fp = fopen(fname, "r");

  if (fp == NULL){

    printf("Failed to open file. Bye\n");
    exit(1);
  }
  //getc(fp)从打开的文件中获得一个字符
  while ((ch = getc(fp)) != EOF)
    putchar(fp);

  fclose(fp);

  return 0;

}
