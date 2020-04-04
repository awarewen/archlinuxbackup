//11-29_sort_str.c
//读入字符串，并排序字符串
//
#include <stdio.h>
#include <string.h>
#define SIZE 81   //限制字符串的长度
#define LIM 20   //可读入的最大行数
#define HALT " "//空字符停止输入

void stsrt (char * strings [], int num);     //利用指针对字符串进行排序
char * s_gets (char *, int);

int main (void) {

  char input [LIM][SIZE];       //输入
  char * ptstr [LIM];          //行指针用来将字符串排序
  int ct = 0;                 //输入计数
  int k;                     //输出计数

  printf("Input ip to %d lines, and I will sort them.\n", LIM);
  printf("To stop, press the Enter key at a line's start.\n");
  while (ct < LIM && s_gets (input[ct], SIZE) != NULL   //保证s_gets成功获取最多20行且不以\0开头的字符串
        && input [ct][0] != '\0'){

    ptstr [ct] = input [ct];      //将指针指向字符串
    ct++;
  }
  stsrt (ptstr, ct);
  puts ("\nHere's the sorted list:\n");
  for (k = 0; k < ct; k++)
    puts (ptstr [k]);

  return 0;
}

char * s_gets (char * st, int n){

  char * ret_val;
  int i = 0;

  ret_val = fgets (st, n, stdin);
  if (ret_val){

    while (st [i] != '\n' && st [i] != '\0')
      i++;
    if (st [i] == '\n')
      st [i] = '\0';
    else 
      while (getchar () != '\n')
        continue;
  }
  return ret_val;
}

void stsrt (char *strings [], int num){

  char *temp;
  int top, seek;

  for (top = 0; top < num -1; top ++)                         //一共２０行
    for (seek = top + 1; seek < num; seek ++)                //top与top＋１也就是剩下的19行每行比较
      if (strcmp (strings [top], strings[seek]) > 0){       //strcmp用机械排序比较发现的第一对不同的字符

        temp = strings [top];                             //交换
        strings [top] = strings [seek];
        strings [seek] = temp;
      }
}

