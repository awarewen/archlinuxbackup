//test.c
//
#include <stdio.h>
#include <string.h>

int main (void){

  int * pr = (int [2]){2,3};
  int zippo[2][2] = { 1, 2, 3, 4 };

  char * cptr = "hello";

  for (int i = 0; i < 2; i++)
    for (int n = 0; n < 2; n++)
  printf("%p|", &zippo[i][n]);


  putchar('\n');
  printf("zippo + 1= %p|%d\n", zippo + 1, zippo + 1);
  printf("**(zippo + 1)%p|%d\n", **(zippo + 1), **(zippo + 1));
  printf("*(*(zippo + 1))|&%p|%d\n", &(*(*(zippo + 1))), *(*(zippo + 1)));

  printf("*(zippo[0] + 1) %p|&%p|%d\n", *(zippo[0] + 1), &(*(zippo[0] + 1)), *(zippo[0] + 1));
  printf("*(zippo[1] + 1) %p|&%p|%d\n", *(zippo[1] + 1), &(*(zippo[1] + 1)), *(zippo[1] + 1));

  printf("===========\n");
  printf("pr = %d, & %p | %p *pr = %d\n", pr, &pr, pr, *pr);

  printf("===========\n");
  printf("cptr + 5 = %p", cptr + 4);
  printf("strchr = %p\n", strchr (cptr, 'o'));
  printf("*strchr = %c\n", *strchr (cptr, 'o'));
  printf("*(cptr + 4) = %c\n", *(cptr + 4));

  return 0;
}
