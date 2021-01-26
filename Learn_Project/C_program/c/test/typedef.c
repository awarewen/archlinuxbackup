#include <stdio.h>

//-------创建新类型
typedef void ( * VOID_P ) ( const int );     //创建一个函数指针类型名 VOID_P
typedef void ( * FP_P )   ( VOID_P ); //创建一个指向函数指针的函数指针类型名 FP_P
typedef void ( * FUN_FP ) ( FP_P );  //创建一个参数类型为 FP_P的指针数组

//

//-------原型
FUN_FP * FUN_FP_PFUN (const int); //函数原型
VOID_P * choice_funs (const int);

void fun_1 (void);
void fun_2 (void);
//


//-------函数
void fun_1(void){

  printf("-- fun_1\n");
}

//-------函数
void fun_2(void){

  printf("-- fun_2\n");
}

//


//-------指针函数
VOID_P * choice_funs (const int choiceFuns){ // void (*wa(void)) (void) 

  fun_1 ();
  fun_2 ();

  printf("\nchoice_funs & = fun_1 = %p, fun_2 = %p\n", fun_1, fun_2);

  return (void *)( choiceFuns == 1 ? 
              fun_1 : fun_2 ); //返回地址
}

//


//-------指针函数
FUN_FP * FUN_FP_PFUN (const int choiceFuns){ //创建一个FUN_FP类型的指针函数

  choice_funs (choiceFuns);

  return (void *)choice_funs;
}
//----------------------------------------------

int main (void){

  int choiceFuns;

  printf("choise your fun: (1-2, q quit) \n");

  while ( scanf (" %d", &choiceFuns) == 1 && choiceFuns > 0 && choiceFuns < 3){
  
    printf("your choice_fun & : %p\n\n", choice_funs (choiceFuns) ); //查看返回值

    printf("FUN_FP_PFUN Return choice_funs & = %p\n", FUN_FP_PFUN (choiceFuns) ); //查看返回值
  }

  return 0;

}

