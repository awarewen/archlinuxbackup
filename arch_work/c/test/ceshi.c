// fread
//
#include <stdio.h>
#include <stdlib.h>

#define NUM 10

int main (void){

  FILE *fa, *fs;
  char ar[NUM] = {0};
  int j,i;
  j = i = 0;
  char ch;

  //打开两个文件;

  if ((fa = fopen ("file_1", "a+")) == NULL){

    fprintf(stderr, "%s open err\n", "file_1");
    exit (EXIT_FAILURE);
  }

  if ((fs = fopen ("file_2", "r+")) == NULL){

    fprintf(stderr, "%s open err\n", "file_2");
    exit (EXIT_FAILURE);
  }

  fprintf(fa, "file_1\n");
  fprintf(fs, "file_2\n");

  for (int i = 0; i < 10; i++)
    fprintf(fa, "%2d", i);

  while ((j = fread (ar, sizeof (char), NUM, fs)) > 0){

    fwrite (ar, sizeof (char), NUM, fa); //将f2拷贝到f1
    j++;
  }

  if (ferror(fa))
    fprintf(stderr, "Error in reading file %s\n", "file_1");
  if (ferror(fs))
    fprintf(stderr, "Error in reading file %s\n", "file_2");

  fclose (fs);

  rewind (fa); //fs指针回到文件开头
  printf("==========file_1-ch=========\n");
  while ((ch = getc (fa)) != EOF)
    putchar (ch);

  printf("==========file_1-fa=========\n");
  while ((ch = getc (fa)) != EOF)
    putchar (ch);
  fclose (fa);

  printf("===========ar=============\n");
  puts(ar);
  printf("== while fread j = %d", j);



  return 0;
}
