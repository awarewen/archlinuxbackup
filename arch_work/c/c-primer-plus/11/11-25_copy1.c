//11-25_copy1.c
//strcpy
//
#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIM 5

char * s_gets (char *, int);

int main (void){

  char qwords [LIM][SIZE];
  char temp [SIZE];
  int i = 0;
  char * ret_cpy;

  printf ("Enter %d words beginning with q:\n", LIM);
  while (i < LIM && s_gets (temp, SIZE)){

    if (temp[0] != 'q'){
      printf("%s doesn't begin with q!\n", temp);
    }
    else {

      ret_cpy = strcpy (qwords[i], temp);
      printf("ret_cpy = %p, = %s\n", ret_cpy, ret_cpy);
      printf("qwords[i] = %p\n", qwords[i]);
      i++;
    }
  }
  puts ("Here are the words accepted:");
  for (i = 0; i < LIM; i++)
    puts (qwords[i]);

  return 0;
}

char * s_gets (char * st, int n){

  char * ret_val;
  int i = 0;

  ret_val = fgets (st, n, stdin);
  if (ret_val){

    while (st[i] != '\n' && st [i] != '\0')
      i++;
    if (st [i] == '\n')
      st [i] = '\0';
    else
      while (getchar () != '\n')
        continue;
  }

    return ret_val;
}
