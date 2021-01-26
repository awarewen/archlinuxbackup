#include <stdio.h>

int main (void){

  char choice[10] = {0};
  const char * cp1 = choice;

  printf("请选择产品：");
  fgets (choice, 10, stdin);
  puts (cp1);
    printf("普通\n");

  return 0;
}
