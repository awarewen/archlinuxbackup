// 14-16-func-ptr.c
// 指针函数
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 81

char *s_gets (char *, int);

char showmenu (void); //菜单
void eatline  (void);//读取到行尾
void show (void (*fp)(char *), char *str);
void ToUpper (char *); //处理转换大写
void ToLower (char *);//处理转换小写
void Transpose (char *); //大小写置换
void Dummy (char *);//不更该字符串

int main (void){

  char line [LEN];
  char copy [LEN];
  char choice;
  void (*pfun)(char *);

  puts ("Enter a string (empty line to quit): ");
  while (s_gets (line, LEN) != NULL && line[0] != '\0'){

    while ((choice = showmenu()) != 'n'){

      switch (choice){

        case 'u':
          pfun = ToUpper;
          break;
        case 'l':
          pfun = ToLower;
          break;
        case 't':
          pfun = Transpose;
          break;
        case 'o':
          pfun = Dummy;
          break;
      }
      strcpy (copy, line);
      show (pfun, copy);
    }
    puts ("Enter a string (Empty line to quit):");
  }
  puts ("Bye!");

  return 0;
}

char *s_gets (char *st, int n){

  char *ret_val;
  char *find;

  ret_val = fgets (st, n, stdin);
  if (ret_val){

    find  = strchr (st, '\n');
    if (find)
      *find = '\0';
    else 
      while(getchar () != '\n')
        continue;
  }
  return ret_val;
}

char showmenu (void){

  char ans;
  puts ("Enter menu choice:");
  //menu 
  printf("%s %s\n", "u) uppercase", "l) lowercase");
  printf("%s %s\n", "t) transposed case","o) original case");
  printf("n) next string");

  ans = getchar (); //获取选择
  ans = tolower(ans);//输入转换为小写
  //ans = tolower (getchar ());
  eatline();//清理输入行

  while (strchr ("ulton", ans) == NULL){ //查找输入是否在其中

    puts ("Please enter a u, l, t, o , or n:");
    ans = tolower (getchar ()); //重新输入
    eatline ();
  }
  return ans; 
}

void eatline (void){

  while (getchar () != '\n')
    continue;
}

void ToUpper (char *str){ //处理字符串

  while (*str){ //'\0'结束循环

    *str = toupper (*str); //用库函数转换大写
    str++;
  }
}

void ToLower (char *str){

  while (*str){

    *str = tolower (*str);//转换为小写
    str++;
  }
}

void Transpose (char *str){

  while (*str){

    if (islower(*str))
      *str = toupper(*str);
    else if (isupper(*str))
      *str = tolower(*str);
    str ++;
  }
}

void Dummy (char *str){

  // DON'T need transpose
  //
}

void show (void (*fp) (char *), char *str){

  (*fp)(str); //调用函数转换
  puts (str);
}
