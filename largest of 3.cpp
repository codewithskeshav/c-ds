#include<stdio.h>
int main()
{

int x,y,z;

printf("enter x,yandz");
scanf("%d%d%d",&x,&y,&z);

if(x>y)
{
	if(x>z)
	 {
	 	printf("x is largest");
	 }
	 else
	 {
	 	printf("z is largest");
	 	
	 }
	 
}
else
{
	if(y>z)
	{
	printf("y is largest");
		
	}
	else
	{
	printf("z is largest");
	
	}
}

}
