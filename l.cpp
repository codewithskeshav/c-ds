#include<stdio.h>

void pass(int *);

int main()
{
	int x[]={10,20,30,40,50};
	pass (x);
	
	
}
void pass(int *y)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d",*(y+i));
		
	}
	
}







