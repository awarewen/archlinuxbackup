// 4-8_6.c
// 编写一个程序，提示用户先输入名再提示输入姓
// 然后在一行中打印用户的姓名，下一行分别打印姓和名的字母数
// 字母数要和名姓的结尾对齐
//
#include <stdio.h>
#include <string.h>

#define LEN 20

int main (void){

  char fname[LEN], lname[LEN];
  int letter_fname, letter_lname;

  printf("Please enter your first name: ");
  scanf (" %s", fname);
  printf("Now enter your last name: ");
  scanf (" %s", lname);
  letter_fname = strlen (fname);
  letter_lname = strlen (lname);

  printf("%s %s\n", fname, lname);
  printf("%*d %*d\n", letter_fname,letter_fname,letter_lname,letter_lname);
  printf("%-*d %-*d\n", letter_fname,letter_fname,letter_lname,letter_lname);

  return 0;
}
