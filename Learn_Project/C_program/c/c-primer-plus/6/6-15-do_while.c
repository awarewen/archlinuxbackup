// do_while.c --出口条件检测
//
#include <stdio.h>
int main(void){


  const int secret_code = 13;
  int code_entered;

  do{

    printf("To enter the triskaidephobia therapy club,\n");
    printf("please enter the secret code number:");
    scanf(" %d", &code_entered);
  }while(code_entered  != secret_code);

  printf("Congratulations! you are cured! \n");

  return 0;
}
