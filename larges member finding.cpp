#include<stdio.h>


void largest(int *);

int main()
{
	int x[]={10,20,30,40,50};
	largest (x);
	
}

void largest (int *x)
{
	int i,large=*(x+0);
	
	for(i=1;i<5;i++)
	{
		if(large<*(x+i))
		{
			large=*(x+i);
			
		}
	}
	printf("largest=%d",large);
}


