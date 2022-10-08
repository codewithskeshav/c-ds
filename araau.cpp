#include<stdio.h>

int main()
{
	int x[]={10,20,10,30,40,50};
	int n;
	int count=0,i;
	
	printf("enter n");
	scanf("%d",&n);
	
	for(i=0;i<6;i++)
	{
		if(x[i]==n)
		{
			count++;
		}
	}
		printf("frequency=%d",count);
	
}

