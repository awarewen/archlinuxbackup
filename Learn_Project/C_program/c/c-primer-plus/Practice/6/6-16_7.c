// 6-16_7.c
// 编写程序把一个单词读入字符数组中
// 然后倒序打印这个单词
//
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int input (char *);
int get_len (char *);

#define MAX_LEN 40

int main (void){

  char save[MAX_LEN];
  int len = 0;
  bool start = true; //控制是否输入

  printf("Please enter : \n");

  for (len = 0, start = true; 
      (start == true && input(save) && (len = get_len(save)) ) || 
           ( (save[0] != '\n') && len >= 0) ; 
       len-- ){

    printf("%c", save[len]);
    start = false;
  }

  printf("\nDONE!\n");

  return 0;
}

//获取输入
int input (char *save){

  return scanf (" %s", save);
}

//获取输入长度
int get_len (char *save){

  return strlen(save);
}
