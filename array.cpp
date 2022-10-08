#include<stdio.h>


int main()
{
	int i;
	int x[5]={1,2,3,4,5};
	int y[5]={1,2,3,4,5};
	int z[4];
	for(i=0;i<5;i++)
	{
		z[i]=x[i]+y[i];
		printf("%d",z[i]);
	}
}
