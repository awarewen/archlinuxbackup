//test.c
//
#include <stdio.h>

int main (void){

  int * pr = (int [2]){2,3};
  int zippo[2][2] = { 1, 2, 3, 4 };

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

  return 0;
}
