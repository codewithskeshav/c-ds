#include<stdio.h>
int main()

{
	
int n;

b:

printf("enter n");
scanf("%d",&n);

a:
	
if(n%2==0)
{
	printf("even");
	
}
else
{
	printf("odd");
	 }
	 
	 printf("enter 1 for same number enter 2 for different number");
	 scanf("%d",&n);
	 
	 if(n==1)
	 {
	 	goto a;
	 }
	 else if(n==2)
	 {
	 	goto b;
	 }
}
