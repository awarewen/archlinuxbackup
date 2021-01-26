/*  
 *  2020-06-29 23:16
 *  @Aware
 *
 *  Demand:
 *  编写一个函数
 *  从标准stdin读取字符，直到文件结尾
 *  报告每个字符是否为字母
 *  是,返回字母表的位置，c和C为３
 * 否,返回-1*/
#include <stdio.h>
#define LEN 100

int IsAlpha(char *ch);

int main (void){
  char ar[LEN];
  int ret;

  for (int i = 0;i < LEN && (ar[i] = getchar() ) != EOF; i ++){

    //if (i%5 == 0)putchar('\n');
    if ( ( ret=IsAlpha(&ar[i]) )!=-1)
        printf("%c is: %d\n", ar[i], ret); 
  }
  printf("Done!\n");

  return 0;
}

int IsAlpha(char *ch){

  if (*ch >= 'a' && *ch <='z')
    return 26-('z' - *ch);
  else if (*ch >= 'A' && *ch <= 'Z')
    return 26-('Z' - *ch);
  else return -1; 
}
