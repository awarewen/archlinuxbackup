// 7-10.c
// 提示输入工资,然后让用户缴纳指定的纳税金种类和应纳税收入
// 计算税金，循环让用户多次输入
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define QUIT 0 //退出

#define IN_BASIC_TAX_RATE 0.15 //在基本财产范围部分的税率
#define OUT_BASIC_TAX_RATE 0.28 //超出基本部分的税率

//单身部分
#define SINGLE_BASIC_PROPERTY 17850 
#define SINGLE_IN_BASIC_TAXRATE IN_BASIC_TAX_RATE //单身在基本财产内的税率
#define SINGLE_OUT_BASIC_TAXRATE OUT_BASIC_TAX_RATE //单身超出基本财产部分的税率
//户主部分
#define HOUSEHOLDER_BASIC_PROPERTY 23900 
#define HOUSEHOLDER_IN_BASI_TAXRATE IN_BASIC_TAX_RATE
#define HOUSEHOLDER_OUT_BASIC_TAXRATE OUT_BASIC_TAX_RATE
//已婚，共有部分
#define MARRIED_SHARE_BASIC_PROPERTY 29750
#define MARRIED_SHARE_IN_BASIC_TAXRATE IN_BASIC_TAX_RATE
#define MARRIED_SHARE_OUT_BAISC_TAXRATE OUT_BASIC_TAX_RATE
//已婚，离异部分
#define MARRIED_DIVORCE_BASIC_PROPERTY 14875
#define MARRIED_DIVORCE_IN_BASIC_TAXRATE IN_BASIC_TAX_RATE
#define MARRIED_DIVORCE_OUT_BASIC_TAXXRATE OUT_BASIC_TAX_RATE

/**
 * header   : 打印表头
 * 1. 缴税类别
 * 2. 税率
 */void header(void);
//

void eat_line (void){

  while (getchar () != '\n')
    continue;
}
/**
 * get_tax  : 选择缴税类别和税率
 * @ choice : 指针类型,需要用来指定choice_tax中存储哪种税率
 * @ choice_tax_rate : 用来存储税率
 */void get_tax (int *choice,float *wage, float *tax);
//

/**
 * choice   : 选择缴税类别
 * @ choice : 保存选择
 * 选择退出返回0,其他返回选择的数字
 */int get_choice (int *choice);
//

/* input : 输入函数
 * @ mode: 为1时为输入选择，2时为输入property
 * 返回输入
 */int input (int mode);
//

/**
 * 打印需要缴纳的税金
 * @ tax : 要输出的税金的数量
 */void show (const float *tax);
//

int main (void){

  /**
   * @ choice : 选择缴税类型
   * @ tax : 税金
   * @ wage: 财产
   * @ mode: 输入模式
   */
  int choice;
  float property, tax;
  //打印表头
  header(); 

  while ( get_choice(&choice) != QUIT){//选择缴税类型 
   //输入工资
   printf("Enter your wage : ");
   property = input (2);
   //获取税金
   get_tax(&choice, &property, &tax); 
   system("clear");/* 清屏 */
   header();
   show (&tax);//显示需要缴纳的税金
   printf("Enter next (0 to quit): ");
  }

  return 0;
}

//打印表头
void header(void){

  // 打印纳税种类表格
  printf("%20s | %20s\n", "类别", "税金");
  printf("%-20s | %-20s\n", "1)单身", "17850美元按15%计算, 超出部分按28%计算");
  printf("%-20s | %-20s\n", "2)户主", "23900美元按15%计算, 超出部分按28%计算");
  printf("%-22s | %-20s\n", "3)已婚,共有", "29750美元按15%计算, 超出部分按28%计算");
  printf("%-22s | %-20s\n", "4)已婚,离异", "14875美元按15%计算, 超出部分按28%计算");
  printf("0) quit\n");

  printf("--------------------Enter choice (0 to quit):--------------------\n");
   }

//获取选择
int get_choice (int *choice){
  *choice = input (1);
  return *choice;
}

//计算税金
void get_tax (int *choice,float *property, float *tax){

  //获取输入
  switch (*choice){

    case 1://单身，17850美元部分按15%，超出按28%

      if (*property <= SINGLE_BASIC_PROPERTY){ //当财产不超过基本税率财产
        *tax = *property * SINGLE_IN_BASIC_TAXRATE;
      }else{ //当财产超出基本税率财产范围：基本税金+超出部分的税金
        *tax = SINGLE_BASIC_PROPERTY * SINGLE_IN_BASIC_TAXRATE + (*property - SINGLE_BASIC_PROPERTY) * SINGLE_OUT_BASIC_TAXRATE;
      }
      break;

    case 2://户主，23900美元按15%，超出按28%

      if (*property <= HOUSEHOLDER_BASIC_PROPERTY){
        *tax = *property * HOUSEHOLDER_IN_BASI_TAXRATE;
      }else{
        *tax = HOUSEHOLDER_BASIC_PROPERTY * HOUSEHOLDER_IN_BASI_TAXRATE + (*property - HOUSEHOLDER_BASIC_PROPERTY) * HOUSEHOLDER_OUT_BASIC_TAXRATE;
      }
      break;
      
    case 3://已婚，共有，29750美元按15%，出处按28%

      if (*property <= MARRIED_DIVORCE_BASIC_PROPERTY){
        *tax = *property * MARRIED_DIVORCE_IN_BASIC_TAXRATE;
      }else{
        *tax = MARRIED_DIVORCE_BASIC_PROPERTY * MARRIED_DIVORCE_IN_BASIC_TAXRATE + (*property - MARRIED_DIVORCE_BASIC_PROPERTY) * MARRIED_DIVORCE_OUT_BASIC_TAXXRATE;
      }
      break;

    case 4://已婚，离异，14875美元按15%，超出按28%
      if (*property <= MARRIED_SHARE_BASIC_PROPERTY){
        *tax = *property * MARRIED_SHARE_IN_BASIC_TAXRATE;
      }else{
        *tax = MARRIED_SHARE_BASIC_PROPERTY * MARRIED_SHARE_IN_BASIC_TAXRATE + (*property - MARRIED_SHARE_BASIC_PROPERTY) * MARRIED_SHARE_OUT_BAISC_TAXRATE;
      }
      break;

    case 0: // 退出程序
      printf("Bey!\n");
      exit(EXIT_FAILURE);
      break;
  }

}

//输入函数
int input (int mode){

  _Bool ok = 1;
  int in = 0;
  if (mode == 1){ //输入选择
    while (ok && scanf (" %d", &in) == 1){
     //对输入的错误进行处理
      if (in < 0){ printf("Please enter a number > 0! >:"); continue; }
        else if (in > 4){ printf("Please enter a number < 4! >:"); continue;}
            else ok = 0; 
    }
  }
  if (mode == 2){ //输入wage
    while (ok && scanf (" %d", &in) == 1){
      if (in < 0){  printf("Please enter a number > 0! >:"); continue; }
          else ok = 0;
    }
  }
  
  return in;
}

//打印输出
void show(const float *tax){
  printf("You need pay %f of tax \n", *tax);
}
