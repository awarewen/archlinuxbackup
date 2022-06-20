// 13-1-count.c
// 标准i/o , 一个类似cat命令的程序
// 将其他文件名作为参数，然后打印文件中的内容
//
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

  int ch;     //读取文件时存储每个字符

  FILE *fp; //文件指针
  unsigned long count = 0;

  if (argc != 2){
   // 如果命令行执行时不是两个参数 ，则打印程序名并且异常退出程序

    printf("Usage: %s filename\n", argv[0]);
    exit (EXIT_FAILURE);
  }

  if ((fp = fopen (argv[1], "r")) == NULL){ 
  //以可读模式打开 argv[1]文件名, 文件打开失败则打印错误退出

    printf("Con't open %s\n", argv[1]);
    exit (EXIT_FAILURE);
  }

  while ( (ch = getc (fp)) != EOF){ 
  //打印文件中的所有字符

    putc (ch, stdout); // 和putchar ()函数一样
    count++;
  }

  fclose (fp);  //关闭文件
  printf("File %s has %lu chaaracters \n", argv[1], count);

  return 0;
}
