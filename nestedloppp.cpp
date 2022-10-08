#include<stdio.h>
int main()
{
	

int i,j,k,l;

for(i=1;i<=5;i++)
 { 
	for(j=1;j<=i;j++)
	{
		printf(" ");
	}
	for(k=i;k<=4;k++)
	{
		printf("%d",k);
	}
	for(l=5;l>=i;l--)
	{
		printf("%d",l);
	}
	printf("\n");
 
 }
 

}
