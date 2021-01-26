//11-fgets2.c
//fgets
//
#include <stdio.h>
#define STLEN 10

int mian (void){

  char words [STLEN];

  puts ("Enter string (emptyline to quit):");

  while (fgets (words, STLEN, stdin) != NULL && words[0] != '\n'){

    fputs (words, stdout);
  }

  puts ("Done.");

  return 0;
}
