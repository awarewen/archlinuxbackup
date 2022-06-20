/*  
 *  2020-08-02
 *  @Aware
 *
 *  Demand:*/
#include <stdio.h>
#include <stdlib.h>

#define QUIT 5
#define ROW 10
#define COL 20

void Menu (void);

int  Get_Choice     (void);
int  Get_Str        (int len, char (*str)[], int row);
void PRINT_SourceStr(int len, char *str[]);
int  PRINT_Ascll    (int len, char *str[]);
int  PRINT_StrLen   (int len, char *str[]);
int  PRINT_WordLen  (int len, char *str[]);

int main (void){

  char str[ROW][COL] = {0};
  int getChoice;
  Menu();

  while ( (getChoice = Get_Choice())!= QUIT){
    system("clear");/* 清屏 */
    //while (getchar () != '\n')continue;/* 清空输入行 */
    printf("Enter strs (%d)", ROW);
    Get_Str(COL, str, ROW);
    switch(getChoice){
      case 1: /* 打印源字符串 */
        for (int i = 0; i < ROW; i++)
          printf(" -%s\n", str[i]);
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      default:
        fprintf(stderr,"Don't know.Please Reenter!\n");
        break;
    }
    while (getchar () != '\n')continue;/* 清空输入行 */
    Menu();
  }
  return 0;
}

void Menu(void){

  printf("\t\t\t\t**************************\n"
         "\t\t\t\t*1.打印源字符串          *\n"
         "\t\t\t\t*2.按首字母ASCLL顺序打印 *\n"
         "\t\t\t\t*3.按字符串长度打印      *\n"
         "\t\t\t\t*4.按字符串首单词长度打印*\n"
         "\t\t\t\t*5.QUIT                  *\n"
         "\t\t\t\t**************************\n"
         "Enter your choice: \n"
         "_> ");
}

int Get_Choice(void){
  int choice;
  while ( scanf (" %d", &choice) != 1 )printf("Please enter a number(1-5):");
  return choice;
}

int Get_Str(int len, char (*str)[len], int row){
  int ret_val = 0;
  int i = 0;
  do{ // 10行
  ret_val = scanf (" %s", *(str+i));
  i++;
  }while (i < row && ret_val != EOF);

   return i;
 }
