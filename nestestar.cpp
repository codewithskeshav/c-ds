#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		if(i==1)
		{
			for(j=1;j<=5;j++)
			{
				printf("*");
				
		    }
		}
		 
		else
		{
			printf("*");
			
			for(k=1;k<=i;k++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
}




