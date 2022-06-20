 //13-5-append.c
 //将一个文件附加到另一个文件的结尾
 //
 //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 4096
#define SLEN 81

void append (FILE *source, FILE *dest);
char * s_gets (char *st, int n);

int main (void){

  FILE *fa, *fs; //fa指向目标文件，fs指向源文件
  int files = 0; //附加的文件数量
  char file_app [SLEN]; //目标文件名
  char file_src [SLEN]; //源文件名
  int ch;

  puts ("Enter name of destination file:");
  
   s_gets (file_app, SLEN);
  if ((fa = fopen (file_app, "a+")) == NULL){

     fprintf(stderr, "Can't open %s\n", file_app);
    exit (EXIT_FAILURE);
  }
  if (setvbuf (fa, NULL, _IOFBF, BUFSIZE) != 0){

    fputs ("Can't create output buffer\n", stderr);
    exit (EXIT_FAILURE);
  }
  
  puts ("Enter name of first source file (empty line to quit) :");
  while (s_gets (file_src, SLEN) && file_src[0] != '\0'){

    if (strcmp (file_app, file_src) == 0){ //判断是否两个名字相同

      fputs ("Can't append file to itself\n", stderr);
    }else if ((fs = fopen (file_src, "r")) == NULL){

      fprintf(stderr, "Can't open %s\n", file_src);
    }else{

      if (setvbuf (fs, NULL, _IOFBF, BUFSIZE) != 0){ //NULL 函数自行分配一个缓冲区

        fprintf(stderr, "Can't creat input buffer\n");
        continue; //创建缓冲区失败 进入下次循环 重新输入源文件名
      }
      append (fs, fa); //调用附加
      // 出现读写错误
      if (ferror (fs) != 0)
        fprintf(stderr, "Error in reading file %s.\n", file_src);
      if (ferror (fa) != 0)
        fprintf(stderr, "Error in reading file %s.\n", file_app);

      fclose (fs);
      files++;
      printf("File %s appended.\n", file_src);
      puts ("Next file (empty line to quit):\n");
    }
  }
  printf("Done appending. %d files appened.\n", files);
  rewind(fa); //回到文件开头
  printf("%s contents:\n", file_app);
  while ((ch = getc (fa)) != EOF) //打印整个文件
    putchar (ch);
  puts ("Done displaying.");
  fclose (fa);

  return 0;
}


void append (FILE *source, FILE *dest){

  size_t bytes;
  static char temp [BUFSIZE]; //只分配一次

  while ((bytes = fread (temp, sizeof(char), BUFSIZE, source)) > 0) //将source 文件中的数据取c
    fwrite (temp, sizeof (char), bytes, dest);
}


char * s_gets (char *st, int n){

  char * ret_val;
  char * find;

  ret_val = fgets (st, n, stdin); 
  if (ret_val){

    find = strchr(st, '\n'); //查找换行
    if (find) 
      *find = '\0'; //将\n转换为\0
    else 
      while (getchar () != '\n')
        continue;
  }
  return ret_val;
}
