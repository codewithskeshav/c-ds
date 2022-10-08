#include<stdio.h>
int main()
{

int i,n;
float sum=0,fact=1;

printf("enter n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	fact=fact*i;
	sum=sum+1/fact;
	
}
printf("sum=%f",sum);
}
