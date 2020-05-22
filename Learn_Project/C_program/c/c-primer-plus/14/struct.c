// 带有伸缩型数组的结构体
//
#include <stdio.h>
#include <stdlib.h>

#define ALLASCLL 50//所有的ascll

#define ASCLLCOUNT 20//ascll计数

struct ASCLL{
  
  int count;//ascll number
  int AscllNum[ASCLLCOUNT];  //计数
  char chr[];//存放字母
};
struct a {

  int nu;
  char ar[];
}a;

struct ALL_ASCLL{

  int CountAll;//ascll总数
  int AllAscllNmb;//所有字母的ascll码
  char Boot[ALLASCLL];//存放all 字母
}allascll;
////////////////////////////////////////
//联合
struct a1 {int na1; int na2;};
struct a2 {float fa1; float fa2;};

struct num {

  double dnum;
  union {

    struct a1 anum;
    struct a2 anum2;
  }o;
}number;

void clearup (struct ASCLL *);

void ascllmake (char);

int main (void){

  number.o.anum.na1 = 1;
  int count;
      //int i;
  struct ASCLL *chp1, *chp2;
  struct a *d,*c;
    //分配内存chp1,chp2
  chp1 = malloc (sizeof (struct ASCLL) + ASCLLCOUNT* sizeof (char));
  chp2 = malloc (sizeof (struct ASCLL) + ASCLLCOUNT* sizeof (char));
  d = malloc (sizeof (struct a) + ASCLLCOUNT*sizeof (char));
  c = malloc (sizeof (struct a) + ASCLLCOUNT*sizeof (char));
  //初始化
  for (count = 0; count < ASCLLCOUNT; count ++){

    chp1 -> AscllNum[count] = 'a'+count;
    chp1 -> chr[count] = 'a' + count;

    chp2 -> AscllNum[count] = 'A'+count;
    chp2 -> chr[count] = 'A' + count;
  }    //ascll数量总和
    chp1 -> count = count; 
    chp2 -> count = count;
    //
   // 打印chp1
  for (count = 0; count < ASCLLCOUNT; count ++){

    if (0 == count % 4)
      putc ('\n', stdout);
    printf("|%2c -%4d|", chp1->chr[count], chp1->AscllNum[count]);
  }
  puts ("\n---------------------------");
  //打印chp2
  for (count = 0; count < ASCLLCOUNT; count ++){

    if (0 == count % 4)
      putc ('\n', stdout);
    printf("|%2c -%4d|", chp2->chr[count], chp2->AscllNum[count]);
  }

  putc('\n', stdout);
  // 伸缩数组结构赋值
  *chp1 = *chp2;
  for (count = 0; count < ASCLLCOUNT; count ++)
    printf("%c-%d|", chp1->chr[count], chp1->AscllNum[count]);
  ///////////////////////////////////////////////////////////////

  //直接按值传递给结构
  puts ("\nascllmake \n");
  for (count = 0; count < ASCLLCOUNT; count++){

  d->ar[count] = chp2->chr[count];
  ascllmake (d->ar[count]);
  }

  printf("a = %zd\n",sizeof (a));

  /////////////////////////////////////////////
  //访问结构成员伸缩数组
    
  
  // 回收内存
  clearup (chp1);
  clearup (chp2);

  return 0;
}
    

// ckear
void clearup (struct ASCLL* clearp){

  free (clearp);
}

void ascllmake (char ascll){

  //打印
  printf("%c|", ascll);
}
