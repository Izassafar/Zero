#include<stdio.h>
void main()
{
	int a,b,t;
	scanf("%d",&a);
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("%d\t%d",a,b);
}
