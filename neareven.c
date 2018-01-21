#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
	{
		n=n;
	}
	else
	{
		n=n-1;
	}
	printf("%d",n);
}
