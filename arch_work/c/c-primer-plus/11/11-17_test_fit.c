//11-17-test_fit.c
//使用缩短字符串长度的函数
//
#include <stdio.h>
#include <string.h>

void fit (char *, unsigned int);

int main (void){

  char mesg [] = "Thing should ne as simple as possible,"
                 " but not simpler.";

  puts (mesg);
  fit (mesg, 38);
  puts (mesg);
  puts ("Let's look at some more of the string.");
  puts (mesg + 39);  //将38之后的字符串首地址传给puts 

  return 0;
}

void fit (char * string, unsigned int size){

  if (strlen (string) > size)
    string[size] = '\0';    //将字符串在３８长度这添加结束符\0
}
