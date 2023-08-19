#include<stdio.h>
void main()
{
	
	int a,b,c;
	printf("Enter the value a:");
	scanf("%d",&a);
	printf("Enter the value b:");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a is %d, b is %d",a,b);
}

