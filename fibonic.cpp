#include<stdio.h>
int main()
{
	int a=0,b=1,c;
	int i;
	
	i=1;
	do
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
		i++;	
	}
	while(i<=10);
}




