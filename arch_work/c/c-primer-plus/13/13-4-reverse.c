// 13-4-reverse.c
// 倒序显示文件内容
// 文件，rewind, fseek, ftell, 
//
#include <stdio.h>
#include <stdlib.h>

#define CNTL_Z '\032' //dos 文本文件中的文件结尾
#define SLEN 81

int main (void){

  char file [SLEN];
  char ch;
  FILE *fp;
  long count, last;

  puts ("Enter the name of the file to be processed:");
  scanf ("%80s", file);
  if ((fp = fopen (file, "rb")) == NULL){ //打开文件

    fprintf(stderr, "Can't open %s\n", file);
    exit (EXIT_FAILURE);
  }

  fseek (fp, 0L, SEEK_END);  //定位到文件末尾 
  last = ftell (fp); //将文件开始到文件末尾的字节数给long指针last
  for (count = 1L; count <= last; count++){ //count

    fseek (fp, -count, SEEK_END);   //-count回退
    ch = getc (fp); //ch获得fp指向的字符
    if (ch != CNTL_Z && ch != '\r') //如果当前位置的字符不是ms-dos文件的结束符/\r打印该字符
      putchar (ch); //打印字符
  }
  putchar ('\n');
  fclose (fp);

  return 0;
  
}
