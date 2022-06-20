#include<stdio.h>
#include<stdlib.h>

void zhuanz(int (*p)[4]);

int main(void)
{/************found************/

	int a[4][4] = {0};
  int i,j;
  int (*p)[4];
  int *pr = &a[0][0];

	p=a; 

	for(i = 0;i < 4;i++)
		for(j = 0;j < 4;j++)
		{
		  scanf("%d",&a[i][j]);

		} 

	printf("Input:");
  for (i = 0; i < 16; i ++)
    printf("%d", *(p+i) );
	zhuanz(p); 

  return 0;
}


void zhuanz(int (*p)[4])
{/************found************/
	int a[4][4];
  int i,j,n;
	p=a;
	n=0; 
	for(i=0;i<4;i++)
		for(j=i+1;j<4;j++)
		{
			a[i][j]=a[j][i];
			printf("%d ",*(*(p+j)+i));
			n++;
			if(n%4==0)
				printf("\n");
    }  
}
