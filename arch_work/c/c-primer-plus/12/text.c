# include <stdio.h>

int main (void){

  int a[2][2] = { {1,2},{3,4}};
  int * p;
  int i = 0;
  p = a;
  while (i < 4)
    printf(" %d\n", *(p+i++));
  return 0;
}
