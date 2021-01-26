// 7-8.c
// 优化7-7

#include <stdio.h>
#include <stdlib.h>
//税前
#define BASIC_TIME_WAGE 10.00     //基本小时工资
#define BASIC_TIME 40            //超过40h算加班
#define OVERTIME_WAGE 1.5*10.00 //加班小时工资
//税后
#define TAX_TOP 0.15              //前300为%15
#define TAX_NEXT 0.2              //后150为%20
#define TAX_REMAIN 0.25          //剩下为%25
#define TAX_TOP_WAGE 300   //前300工资税率为%15
#define TAX_NEXT_WAGE 150 //后150工资税率为%20
#define TAX_TOP_NEXT_WAGE (TAX_TOP_WAGE+TAX_NEXT_WAGE) //余下的工资税率为%25

#define QUIT 5//默认退出
//

/**
 *-basic_wage       : 计算税前工资 
 *@ work_time       : 工作时间
 *@ basic_time      : 基本工时
 *@ basic_time_wage : 基本小时工资
 *@ over_time_wage  : 加班小时工资
 * 返回税前工资
 **/
float basic_wage (const int work_time, const int basic_time, const float basic_time_wage, const float over_time_wage);
//

/**
 * tax_wage         : 计算税金
 *@ wage            : 工资
 * 返回税金
 * */
float tax_wage (const float wage);
//

/**
 * 清空输入流
 * */
void clear_line (void);
//

/**
 * show : 税前工资,税后工资,税金
 * @ tax: 税金
 * @ all_wage: 税前工资
 * @ after_tax: 税后工资
 * */
void show (const float tax, const float all_wage, const float after_tax);
//

void display_header (void);

int main (void){

  int work_time = 0;     //一周上班时间
  float all_wage = 0;   //工资总和
  float after_tax = 0; //税后工资
  float tax = 0.0;    //税金

  int choice = QUIT;//默认退出


  display_header ();//表头

  while (scanf (" %d", &choice) == 1 && choice != 5){

    printf("How many times do you work ? \n");//询问工作时间
    scanf (" %d", &work_time);

    switch (choice){


      case 1: //$8.75/hr
        tax = 8.75;//基本薪酬/h
        //基本工资
        all_wage = basic_wage(work_time, BASIC_TIME, BASIC_TIME_WAGE, OVERTIME_WAGE);
        //税后工资
        tax = tax_wage(all_wage);//税金
        after_tax = all_wage - tax;
        break;

      case 2: //$9.33/hr
        tax = 9.33;//基本薪酬/h
        //基本工资
        all_wage = basic_wage(work_time, BASIC_TIME, BASIC_TIME_WAGE, OVERTIME_WAGE);
        //税后工资
        tax = tax_wage(all_wage);//税金
        after_tax = all_wage - tax;
        break;

      case 3: //$10.00/hr
        tax = 10.00;//基本薪酬/h
        //基本工资
        all_wage = basic_wage(work_time, BASIC_TIME, BASIC_TIME_WAGE, OVERTIME_WAGE);
        //税后工资
        tax = tax_wage(all_wage);//税金
        after_tax = all_wage - tax;
        break; 

      case 4: //$11.20/hr
        tax = 11.20;//基本薪酬/h
        //基本工资
        all_wage  = basic_wage(work_time, BASIC_TIME, BASIC_TIME_WAGE, OVERTIME_WAGE);
        //税后工资
        tax = tax_wage(all_wage);//税金
        after_tax = all_wage - tax;

        break; 

      case 5: //退出
        printf("Bye!\n");
        exit (1);
        break;

      default:
        printf("Enter err, pelease enter the number\"1,2,3,4,5\" (5 to quit). ");
        display_header ();
        continue;

    }

   printf("# This week your wages is %.2f, after tax your have %.2f, the tax is %.2f\n\n\n",
           all_wage, after_tax, tax);

   clear_line();

   //下一次输入
   printf("Next choice\n");
   display_header ();//表头
  }

  printf("Bey!\n");

  return 0;
}

void clear_line(void){

  while ( getchar () != '\n')
    continue;
}

//税前工资
float basic_wage (const int work_time, const int basic_time, const float basic_time_wage, const float over_time_wage){

  float all_wage = 0;
  if (work_time <= basic_time){ //没有加班费

    all_wage = work_time * basic_time_wage;
  }else{//基本40工时+加班工时

    all_wage = basic_time * basic_time_wage + (work_time - basic_time) * over_time_wage;
  }

  return all_wage;
}

//税金
float tax_wage (const float all_wage){

  float tax = 0.0;//将所有的税金项目累加
  
  if (all_wage - TAX_TOP_WAGE >= 0){//在大于或等于时说明工资高于TAX_TOP_WAGE

    tax += TAX_TOP * TAX_TOP_WAGE;//则TAX_TOP_WAGE部分按TAX_TOP税率计算税金
    if (all_wage - TAX_TOP_NEXT_WAGE >= 0){//说明还有余额

       tax += TAX_NEXT * TAX_NEXT_WAGE;//计算TAX_NEXT 部分的税金
       tax += TAX_REMAIN * (all_wage - TAX_TOP_NEXT_WAGE);//按TAX_REMAIN税率计算余额税金
    }else{//如果小于TAX_TOP+TAX_NEXT则计算减去TAX_TOP部分,说明就没有余额

       tax += TAX_NEXT * (all_wage - TAX_TOP);
    }
  }else{//在小于TAX_TOP_WAGE时，all_wage则按TAX_TOP税率计算

    tax += TAX_TOP * all_wage;
  }

  return tax;
}

//表头
void display_header (void){

/**
 * 打印表头
 * */
  for (int i = 0; i < 70; i++) printf("*"); 
  printf("\nPlease enter your corresponding to the desired pay rate or action\n");
  printf("1) $8.75/hr\t\t2) $9.33/hr\n");
  printf("3) $10.00/hr\t\t4) $11.20/hr\n5) quit\n");
  for (int i = 0; i < 70; i++) printf("*");
  printf("\n-->(choice 5 to quit) : ");
  //
}
