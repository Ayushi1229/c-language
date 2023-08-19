#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value a:");
	scanf("%d",&a);
	printf("Enter the value b:");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("a is %d, b is %d",a,b);
}
