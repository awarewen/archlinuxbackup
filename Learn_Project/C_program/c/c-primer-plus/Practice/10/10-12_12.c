/*  
 *  2020-07-09
 *  @Aware
 *
 *  Demand:
 *  */
#include <stdio.h>
#define YEAR 5
#define MONTHS 12
/*  
  */float Show_Ave_Rain(int months, int year, const float **ar);
/*  
 */float Show_Ave_Rain2(int year, int months, const float **ar);

int main (void){
  const float rain[YEAR][MONTHS] = {
    {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},// year 1
    {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},//      2
    {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},//      3
    {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},//      4
    {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2} //      5
  };
  
  printf("YEAR RAINFALL (inches)\n");
  Show_Ave_Rain(YEAR, MONTHS, (const float **)rain);

  printf ("Jan   Feb  Mar\tApr  May\tJul  Aug  Sep  Oct\tNov\tDec\n");
  Show_Ave_Rain2(YEAR, MONTHS, (const float **)rain);

  return 0;
}

float Show_Ave_Rain(int optOne, int optTow, const float **ar){

  float subtot = 0, total = 0;
  int i, j;//循环控制

  for (i = 0; i < optOne; i++){
    for (j = 0, subtot = 0; j < optTow; j++){
      subtot += *((const float *)ar+i*optTow+j);
    }
    printf ("%5d %15.1f\n", 2010+i, subtot);
  }
  
  return total;
}

float Show_Ave_Rain2(int year, int months, const float **ar){

  int i, j;
  float subtot, total = 0;

  for (i = 0; i < months; i++){
    for (j = 0, subtot = 0; j < year; j++)
      subtot += *((const float *)ar + j*months+i);
    printf ("%.1f ", subtot/YEAR);
  }

  return total;
}
