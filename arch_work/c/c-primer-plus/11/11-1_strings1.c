// 11-1_strings.c
// 字符串
//
#include <stdio.h>
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81
int main (void){

  char words [MAXLENGTH] = "I an a string in an array.";
  const char * pt1 = "Sonething is pointing at me.";
  puts ("Here are some string:");
  puts (MSG);
  puts (words);
  puts (pt1);
  words[8] = 'p';
  puts (words);

  return 0;
}
