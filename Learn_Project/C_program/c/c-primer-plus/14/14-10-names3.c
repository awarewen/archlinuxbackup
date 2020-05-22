// 14-10-names3.c
// 使用指针和malloc
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SLEN 81

struct namect {

  char *fname;
  char *lname;
  int  letter;
};

void getinfo  (struct namect *);
void makeinfo (struct namect *);
void showinfo (struct namect *);
void clearup  (struct namect *);
char *s_gets  (char *, int);

int main (void){

  struct namect person;

  getinfo  (&person);
  makeinfo (&person);
  showinfo (&person);
  clearup  (&person);

  return 0;
}

char *s_gets (char *st, int n){

  char *ret_val;
  char *find;

  ret_val = fgets (st, n, stdin);

  if (ret_val){

    find = strchr (st, '\n');
    if (find)
      *find = '\0';
    else{

      while (getchar () != '\n')
          continue;
      fprintf(stderr,"Get Error!!!\n");
    }
  }

  return ret_val;
}

void getinfo (struct namect *pst){

  char temp [SLEN];
  printf("Please enter your first name.\n");
  s_gets (temp, SLEN);
  pst->fname = (char *)malloc (sizeof (temp)+1);// +1 
  strcpy(pst->fname, temp);
  printf("Enter your last name.\n");
  s_gets (temp, SLEN);
  pst->lname = (char *)malloc (sizeof (temp)+1);
  strcpy(pst->lname, temp);
}

void makeinfo (struct namect *pst){

  pst->letter = strlen (pst->fname)+strlen (pst->lname);
}

void showinfo (struct namect *pst){

  printf("%s %s, your name has %d letter.\n", 
          pst->fname, pst->lname, pst->letter);
}

void clearup (struct namect *pst){

  free (pst->fname);
  free (pst->lname);
}
