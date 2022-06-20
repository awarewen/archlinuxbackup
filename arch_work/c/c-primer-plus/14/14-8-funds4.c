// 14-8-funs.c
// 使用结构指针
//
#include <stdio.h>
#include <string.h>

#define NLEN 30

struct namect {

  char fname [NLEN];
  char lname [NLEN];
  int  letters;
};

void getinfo  (struct namect *);
void makeinfo (struct namect *);
void showinfo (const struct namect *);

char * s_gets (char *, int);

int main (void){

  struct   namect person = {

    "fname",
    "lname",
    0
  }; //结构体变量
                         //处理流程开始
  getinfo  (&person);   //只传递地址
   
  makeinfo (&person);
  showinfo (&person);

  return 0;
}

char *s_gets (char *st, int n){

  char *ret_val;
  char *fund;

  ret_val = fgets (st, n, stdin);

  if (ret_val){

    fund = strchr (st, '\n');
    if (fund)
      *fund = '\0';
    else
      while (getchar () != '\n')
        continue;
  }

  return ret_val;
}


void getinfo (struct namect * pst){

  //输入姓名
  printf("Please enter your first name.\n");
    s_gets (pst->fname, NLEN);
  printf("Enter the last name.\n");
    s_gets (pst->lname, NLEN);
}

void makeinfo (struct namect * pst){

  pst->letters = strlen (pst->fname) + strlen (pst->lname);
}

void showinfo (const struct namect * pst){

  printf("%s %s, your name contains %d letters.\n", 
          pst->fname, pst->lname, pst->letters);
}
