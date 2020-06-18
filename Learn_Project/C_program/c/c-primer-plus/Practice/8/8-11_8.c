/*
 * & 显示: 提供加减乘除功能的菜单
 *   提示输入: 两个数
 *   执行相应功能
 *   输入失败允许重新输入
 *
 * & 在除法运算时，用户第二个值为0时应提示用户程序输入第二个值*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


enum Calculator{ // 枚举选项的首写字母
  ADD = 'a', SUB = 's', MUL = 'm', DIV = 'd', 
  QUIT = 'q'};

enum Calculator_Opt{ //枚举算数操作符
  ADD_OPT = '+', 
  SUB_OPT = '-',
  MUL_OPT = '*', 
  DIV_OPT = '/'
};
/*
 * @ Add : 加
 * @ Sub : 减
 * @ Mul : 乘
 * @ Div : 除*/
float Add(const float *num1, const float *num2);
float Sub(const float *num1, const float *num2);
float Mul(const float *num1, const float *num2);
float Div(const float *num1, const float *num2);

/*
 * 菜单
 */void Print_Menu(void);

/*
 * 输入选择
 */int Input_Choice(char *choice);

/*
 * 处理选择
 * @ choice : 根据选项选择处理input
 * @ input  : 需要处理的值
 * 返回处理结果
 */float Choice (char *choice, const float *input_num1, const float *input_num2);

/*  
 * 根据选择返回操作符
 */char Ret_Opt(const char *choice);

/*
 * 要求用户输入两个数
 * 如果是除法要求用户分母不为0
 */void In_Tow_Num(char *choice, float *input_num1, float *input_num2);

/*
 * 清空缓冲
 */void Clear(void);

int main (void){

  float input_num1, input_num2;
  float result;
  char choice;

  Print_Menu();
  while (Input_Choice(&choice) == 1 && choice != QUIT){

    Clear();
    printf("Plese enter to number: ");
    In_Tow_Num(&choice, &input_num1, &input_num2);
    Clear();
    result = Choice(&choice, &input_num1, &input_num2);
    printf("Result:\n"
           "%.2f %c %.2f= %.2f\n"
           "--------------------\n", 
           input_num1, Ret_Opt(&choice), input_num2,result);
    Print_Menu();
    printf("Enter next choice: ");
  }

  printf("Bye!\n");
  return 0;
}

float Add(const float *num1, const float *num2){
  return *num1 + *num2;
}

float Sub(const float *num1, const float *num2){
  return *num1 - *num2;
}

float Mul(const float *num1, const float *num2){
  return *num1 * *num2;
}

float Div(const float *num1, const float *num2){
  return *num1 / *num2;
}

void Print_Menu(void){

  printf("\t    --Calculator--\n"
         "\t    a) Add  s) Sub\n"
         "\t    m) Mul  d) Div\n"
         "\t        q) quit\n"
         "\t---Enter your choice---\n>__\b\b");
}

float Choice (char *choice, const float *input_num1, const float *input_num2){

  switch (*choice){

    case 'a': //加法
      return Add(input_num1, input_num2);
      break;
    case 's': //减法
      return Sub(input_num1, input_num2);
      break;
    case 'm':
      return Mul(input_num1, input_num2);
      break;
    case 'd':
      return Div(input_num1, input_num2);
      break;
    case 'q':
      break;
    default:
        printf("Don't know %c, Please Reenter:", *choice);
        break;
  }
  return -1;
}


int Input_Choice(char *choice){

  int ret_choice = 1;

  while ( (ret_choice = scanf (" %c", choice) )!= 1){
    printf("Please input a character(a,s,m,d or q to quit): ");
  }
  *choice = tolower(*choice);
  return ret_choice;
}

void Clear(void){
  char ch;

  while ((ch = getchar ()) != '\n' && ch != EOF)continue;
  system("clear");
}

void In_Tow_Num(char *choice, float *input_num1, float *input_num2){

  if (*choice != DIV){
    printf("a\n");
    while (scanf (" %f", input_num1) != 1) printf("Err,Reenter a number:");
    while (scanf (" %f", input_num2) != 1) printf("Err,Reenter a number:");
  }
  else{
    printf("b\n");
    while (scanf (" %f", input_num1) != 1) printf("Err,Reenter a number:");
    while (scanf (" %f", input_num2) != 1 || 
            *input_num2 <= 0.0) printf("Err,Reenter a number other than 0: ");
    }
}

char Ret_Opt(const char *choice){

  switch (*choice){
    case ADD:
      return ADD_OPT; 
      break;
    case SUB:
      return SUB_OPT;
      break;
    case MUL:
      return MUL_OPT;
      break;
    case DIV:
      return DIV_OPT;
      break;
  }
  return (char)-1;
}
