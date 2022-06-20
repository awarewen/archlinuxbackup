// text.c 
//
#include <stdio.h>

int main(void){


  int i,j;

  int list[10];

  for (i = 0; i <= 9; i++){


      list[i] = 2*i + 3;

      for (j = 1; j <= i; j++)
        printf("%d", list[j]);
      printf("\n");
  }

  printf("\n++++++++++++++++++++++++++++\n");
   for (i = 0; i <= 9; i++)
     printf(" %.1d", list[i]);

   printf("\n+++++++++++++++++++++++++++\n");
   for (i = 1; i <= 9; i++)
     printf(" %.1d", list[i]);


  return 0;
}
