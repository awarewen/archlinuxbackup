// 12-15-where.c
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int static_shore = 30;
const char * pcg = "String Literal";

int main (void){

  int auto_shore = 40;
  char auto_string [] = "Auto char Array";
  int * pi;
  char * pc1;

  pi = (int *) malloc (sizeof (int));
  *pi = 35;
  pc1 = (char *) malloc (strlen ("Dynamic String") + 1); //+1 存放\0
  strcpy (pc1, "Dynamic String");

  printf("static_shore: %d at %p\n", static_shore, &static_shore);
  printf("  auto_shore: %d at %p\n", auto_shore, &auto_shore);
  printf("         *pi: %d at %p\n", *pi, pi);
  printf("   %s at %p\n", pcg, pcg);
  printf("   %s at %p\n", auto_string, auto_string);
  printf("   %s at %p\n", pc1, pc1);
  printf("Dynamic String at %p\n", "Dynamic String");
  printf("   %s at %p\n", "Quoted String", "Quoted String");

  free (pi);
  free (pc1);

  return 0;
}
