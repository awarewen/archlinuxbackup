// 14-12-flexmemb.c
// 伸缩型数组成员
//
#include <stdio.h>
#include <stdlib.h>

struct flex {

  size_t count;
  double average;
  double scores []; //伸缩型数组成员
};

void showFlex (struct flex*);

int main (void){

  struct flex *pf1, *pf2;
  int n = 5;
  int i;
  int tot = 0;

  // 为结构指针分配内存
  pf1 = malloc(sizeof (struct flex)+n*sizeof (double));
  pf1->count = n;
  for (i = 0; i < n; i++){

    pf1->scores[i] = 20.0-i;
    tot += pf1->scores[i];
  }
  pf1->average = tot / n; //得出平均数
  showFlex (pf1);

  n = 9;
  tot = 0;
  pf2 = malloc (sizeof (struct flex)+n*sizeof (double));
  pf2->count = n;
  for (i = 0; i < n; i++){

    pf2->scores[i] = 20.0 - i / 2.0;
    tot += pf2->scores[i];
  }
  pf2->average = tot / n;
  showFlex (pf2);

  free(pf1);
  free(pf2);

  return 0;
}

void showFlex(struct flex *pst){

  int i;
  printf("Scores : ");
  for (i = 0; i < pst->count; i++)
    printf("%g ", pst->scores[i]);
  printf("\nAverage : %g\n", pst->average);
}
