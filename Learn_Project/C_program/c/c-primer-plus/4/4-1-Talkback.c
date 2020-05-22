// talkback.c --演示与用户交互
#include <stdio.h>
#include <string.h> //提供strlen（）函数的原型
#define DENSITY 62.4//人体密度

int main(void){



  float weight, volume;
  int size, letters;
  char name[40];

  printf("Hi! what your name ? \n");
  scanf("%s", name);
  printf("%s, what your weight in pounds?\n", name);
  scanf("%f", &weight);
  size = sizeof name;
  letters = strlen(name);
  volume = weight / DENSITY;
  printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
  printf("Also, your first name has %d letters, \n", letters);

  printf("and we have %d bytes to store it", size);

  return 0;

}


