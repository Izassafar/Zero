#include<stdio.h>
void main()
{
	int a,b,t;
	printf("Enter the Two Numbers :");
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("The Swap of Two Numbers :%d\t%d",a,b);
}
