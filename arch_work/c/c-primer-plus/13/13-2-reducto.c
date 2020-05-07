//13-2-reducto.c
//将输入的压缩
//
#include <stdio.h>
#include <stdlib.h>  // exit(
#include <string.h> // strcpy,strcat

#define LEN 40

int main (int argc, char *argv[]){

  FILE *in, *out; //文件指针
  int ch;

  char name [LEN];  //存储文件名
  int count = 0;

  if (argc < 2){ //检测是否有两个参数

    fprintf(stderr, "Usage: %s filename\n", argv[0]);
    exit (EXIT_FAILURE);
  }

  if ( (in = fopen (argv[1], "r")) == NULL ){ //打开文件检查

    fprintf(stderr, "I counldn't open the file \"%s\"\n", argv[1]);
    exit (EXIT_FAILURE);
  }

/* 1. strchr 查找第一次'.'，只拷贝'.'前面的字符 */
  strncpy (name, argv[1], LEN - 5);
  name [LEN - 5] = '\0';
  strcat (name, ".red"); //将.red复制到文件名末尾,缺点不会删去原有的文件名
 /* 2.
  * while ( (strrchr (name[i], '.') == NULL)
  *     i++;    //查找'.'符号最后一次的位置
  * while ( i <= LEN )
  *       name [i++] = '\0'; //将'.'后的所有位设为\0
  *
  * 3. 查找第一个'.'然后将'.'后面的字符全部删去
  *
  *    */

  if ( (out = fopen (name, "w")) == NULL){

    fprintf(stderr, "Can't create output file.\n");
    exit (3);
  }

  //拷贝数据
  while ( (ch = getc (in) ) != EOF){

    if (count++ % 3 == 0)
      putc (ch, out);   //打印三个字符中的第一个字符
  }

  if ( fclose (in) != 0 || fclose (out) != 0)
    fprintf(stderr, "Error in closing files\n");

  return 0;
}
