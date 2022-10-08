#include<stdio.h>

int main()
{

char c;

printf("enter character");
scanf("%c",&c);

switch(c)
{
	case 'a':
	
	int x;
	
	printf("enter x");
	scanf("%d",&x);
	
	if(x%2==0)
	{
		printf("even");
	}
		else
		{
			printf("odd");
			
		}
		
		break;
		
		case 'b':
			
		int year;
		
		printf("enter year");
		scanf("%d",&year);
		
		if(year%4==0)
		{
			printf("leap year");
			
		}
			else
			{
				printf("not leap year");
				
		
			}
			break;
			
			default:
				printf("please check");
				
	}
}



