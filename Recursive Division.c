#include<stdio.h>
void main()
{
	int n,m;
	printf("Enter the Number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		m=n/2;
		printf("%d",m);
	}
	else
	{
		printf("%d",n);
	}
}
