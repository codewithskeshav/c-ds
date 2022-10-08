#include<stdio.h>

int main()
{
	int i,n,sum=0;
	
	printf("enter n");
	scanf("%d,&n");
	
	for(i=1;i<=n;i=i+2);
	{
		if(i%4==3)
		{
			sum=sum-i;
		}
		else if(i%4==1)
		{
			sum=sum+i;
		}
		
	printf("sum=%d",sum);
	}
	
	
	
}
