// text2.c
//
#include <stdio.h>

int main(void){

  char ch;
  int Back_scanf;

  Back_scanf = scanf("%c", &ch);
  printf("\n1.Back %d ", Back_scanf);
  printf("\n2.the char is %c", ch);
  printf("\n========================\n");

  while(ch != 'g'){
    printf("%c", ch);
    scanf ("%c", &ch);
  }

  return 0;
}
