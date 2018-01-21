#include<stdio.h>
void main()
{
	int a,b,pro;
	scanf("%d",&a);
	scanf("%d",&b);
	pro=a*b;
	if(pro%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Not Even");
	}
}
