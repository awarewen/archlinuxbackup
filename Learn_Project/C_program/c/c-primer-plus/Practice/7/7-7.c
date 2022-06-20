// 7-7.c
// 提示输入一周工作的小时数
// 打印工资总额，税金，净收入
// 基本工资= 10.00/h
// 加班(超过40h) = (1.5*10.00)/h
// 税率：前300 为 %15
//       续150 为 %20
//       余下 %25
//

#include <stdio.h>

#define BASIC 10.00             //基本工资/h
#define OVERTIME 40             //超过40h算加班
#define OVERTIME_WAGE 1.5*10.00 //加班工资/h
#define ONE 0.15                //前300为%15
#define TWO 0.2                 //后150为%20
#define THREE 0.25              //剩下为%25

int main (void){

  int work_time = 0;  //一周上班时间
  int basic_wage_week = 0; //基本工资
  int wage_over_time = 0;  //加班工资
  int basic_and_over_wage = 0; //基本工资和加班工资
  int after_tax = 0;       //税后工资
  int tax = 0; //税金


  printf("Please enter your work time of the week: \n");
  scanf (" %d", &work_time); //一周工作时间

  // 税前工资总额
  if (work_time < OVERTIME){//小于40h为基本工资
    //如果没有加班
  basic_wage_week = BASIC * work_time; //无加班的基本工资
  } else{

    basic_wage_week = + BASIC * OVERTIME; // 基本工资×40
    wage_over_time  = OVERTIME_WAGE * (work_time - OVERTIME); //加班工资 = 工资×时间
    basic_and_over_wage = basic_wage_week + wage_over_time; //总额=基本+加班
  }

  // 税后工资
  if (basic_and_over_wage - 300 >= 1){// 超过300

    tax += 300 * ONE;// 300的税金
  }else {//如果没有超过300

    tax += basic_and_over_wage * ONE;
  }
  if ( (basic_and_over_wage - (300 + 150) ) >= 0 ){ //超过 300 + 150

    tax += 150 * TWO;
  }else {

    tax += (basic_and_over_wage - 300) * TWO;
  }
  if ( basic_and_over_wage - 150 - 300 >= 0) // 如果余额
  tax += (basic_and_over_wage - 150-300) * THREE; //剩余的工资*%25

  printf(" t %d b %d\n", tax, basic_and_over_wage);
  // 税后工资等于 全部工资-税金
  after_tax = basic_and_over_wage - tax;

  printf("This week your wages is %d, after tax your have %d, the tax is %d",
          basic_and_over_wage, after_tax, tax);

  return 0;
}
